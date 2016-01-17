/**
 * @file tictactoe.cpp
 * @author Claire Goeckner-Wald
 * @date 2015
 * @copyright This code is in the public domain.
 *
 * @brief Tic-Tac-Toe game
 */

#include <cstdlib>
#include <iostream>
#include "board.hpp"
#include "game.hpp"
#include "tictactoe.hpp"

using namespace std;

/**
 * @brief The main function for file Tictactoe
 * @param argc the number of arguments from command-line
 * @param argv the array containing the command-line arguments
 * @return 0
 */
int Tictactoe::main(int argc, char *argv[])
{
	game = new Game();
	game -> run();
	return 0;
}

/**
 * @brief The main function for the whole tic-tac-toe game.
 * @param argc the number of arguments from command-line
 * @param argv the array containing the command-line arguments
 * @return 0
 */
int main(int argc, char *argv[]) 
{
	Tictactoe *tic = new Tictactoe();
	tic -> main(argc, argv);
	return 0;
}



