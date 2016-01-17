/**
 * @file game.cpp
 * @author Claire Goeckner-Wald
 * @date 2015
 * @copyright This code is in the public domain.
 *
 * @brief Runs the game for tic-tac-toe
 */

#include <cstdlib>
#include <iostream>
#include "board.hpp"
#include "game.hpp"

using namespace std;

/**
 * @brief Game constructor
 */
Game::Game()
{
	// Make a board to play on.
	board = new Board();
	// Track whose turn it is.
	turn = x;
}

/**
 * @brief Game deconstructor
 */
Game::~Game()
{
	delete board;
}

/**
 * @brief Runs the game using a "board" from Board class
 */
void Game::run()
{
	// Initialize row and col for player input.
	int row = -1, col = -1;
	
	// Stop playing when a win or a draw has been detected.
	while(!(board -> check_draw()) && board -> check_win() == none)
	{
		// Print board as is.
		board -> print();
		
		// Take player input.
		if (turn == x)
			cout << "Player 1 - make a move! " << endl;
		else
			cout << "Player 2 - make a move! " << endl;
		cout << "Row    (0, 1, or 2): "; // Gather row info
		cin >> row;
		cout << "Columm (0, 1, or 2): "; // Gather column info
		cin >> col;
		
		// Check that move is valid.
		if (board -> query(row, col) != none)
		{
			// Print message and exit if invalid move.
			cout << "Illegal move. Quitting..." << endl;
			
			exit(1);
		}

		// Make the move.
		board -> place(row, col, turn);		

		// Change turns.
		if (turn == x) turn = o;
		else turn = x;
		
		cout << endl;
	}
	
	// Final printing due to end of game. Declares winner (and who) or draw.
	cout << endl;
	if (board -> check_draw())
		cout << "Tic-tac-toe is a draw!" << endl;
	else if (board -> check_win() == x)
		cout << "Player 1 wins!" << endl;
	else
		cout << "Player 2 wins!" << endl;
	
	// Print the final board.
	cout << "Final board:" << endl;
	board -> print();
		
}






