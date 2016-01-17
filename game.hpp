/**
 * @file game.hpp
 * @author Claire Goeckner-Wald
 * @date 2015
 * @brief game.cpp header file
 */

//=================================
// include guard
#ifndef GAME_HPP
#define GAME_HPP

//=================================
// forward declared dependencies
class Board;


//=================================
// the actual class
class Game
{
	private:
		Board *board;
	public:
		Game();
		~Game();
		piece_type turn;
		void run(); // starts the game
};

#endif 


