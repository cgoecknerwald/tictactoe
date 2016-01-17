/**
 * @file board.cpp
 * @author Claire Goeckner-Wald
 * @date 2015
 * @copyright This code is in the public domain.
 *
 * @brief Represents the board for tic-tac-toe
 */

#include <cstdlib>
#include <iostream>
#include "board.hpp"


using namespace std;

/**
 * @brief Board constructor
 */
Board::Board()
{
	// Represents board.
	for(int i = 0 ; i < 3 ; ++i)
 	{
		 for(int j = 0 ; j < 3 ; ++j) 
			squares[i][j] = none;
 	}
}

/**
 * @brief Board deconstructor
 */
Board::~Board()
{
	// de-allocate the 2-d array "squares"
	for(int i = 0 ; i < 3 ; ++i)
 	{
		delete[] squares[i];
 	}
 	delete[] squares;
}

/**
 * @brief Determines the piece_type located at given row and column
 * @param coord_x the queried x-coordinate
 * @param coord_y the queried y-coordinate
 * @return the piece_type: x, o, or none
 */
piece_type Board::query(int coord_x, int coord_y)
{
	// Return info on the location.
	return squares[coord_x][coord_y];
}

/**
 * @brief Places the given piece_type at given row and column.
 * @param coord_x the queried x-coordinate
 * @param coord_y the queried y-coordinate
 * @param piece the piece_type: x, o, or none
 */
void Board::place(int coord_x, int coord_y, piece_type piece)
{
	// Place the piece.
	squares[coord_x][coord_y] = piece;
}

/**
 * @brief Determines winning piece, or none.
 * @return the piece_type: x, o, or none
 */
piece_type Board::check_win()
{
	// Check down the columms & rows for three-in-a-line
	for (int i = 0; i <= 2; i++) 
	{
		// Rows
		if (squares[i][0] == squares[i][1] && squares[i][0] == squares[i][2])
			return squares[i][0];
		// Columms
		if (squares[0][i] == squares[1][i] && squares[0][i] == squares[2][i])
			return squares[0][i];
	}

	// Check down the diagonals for three-in-a-line
	if (squares[0][0] == squares[1][1] && squares[0][0] == squares[2][2])
		return squares[0][0];
	if (squares[0][2] == squares[1][1] && squares[0][2] == squares[2][0])
		return squares[0][0];
	return none;
}

/**
 * @brief Determines whether or not a draw has occurred. Only is a draw if 
 * nobody wins and no spots are open.
 * @return if the draw has occurred
 */
bool Board::check_draw()
{
	int total_pieces = 0;
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (squares[i][j] != none)
				total_pieces++;
		}
	}
	
	// Only is a draw if nobody wins and no spots are open.
	return check_win() == none && total_pieces == 9;
}

/**
 * @brief Pretty-prints the board.
 */
void Board::print()
{
	
	cout << endl;
	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (squares[i][j] == x)
				cout << "X ";
			if (squares[i][j] == o)
				cout << "O ";
			if (squares[i][j] == none)
				cout << "_ ";
		}
		cout << endl;
	}
	cout << endl;
}







