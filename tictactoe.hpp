/**
 * @file tictactoe.hpp
 * @author Claire Goeckner-Wald
 * @date 2015
 * @brief tictactoe.cpp header file
 */


//=================================
// include guard
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

//=================================
// forward declared dependencies
class Game;

//=================================
// the actual class
class Tictactoe
{
	private:
		Game *game; // the game to play
	public:
		int main(int argc, char *argv[]); // main for Tic-Tac-Toe
};

#endif 



