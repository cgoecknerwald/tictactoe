/**
 * @file board.hpp
 * @author Claire Goeckner-Wald
 * @date 2015
 * @brief board.cpp header file
 */


//=================================
// include guard
#ifndef BOARD_HPP
#define BOARD_HPP


//=================================
// the actual class
enum piece_type {x = 1, o = 0, none = 2}; // used to distinguish piece types

class Board 
{
	private:
		piece_type squares[3][3]; // represents the board
	public:
		Board();
		~Board();
		piece_type query(int coord_x, int coord_y); // return a square state
		void place(int coord_x, int coord_y, piece_type piece); // places a piece onto the board
		piece_type check_win(); // returns which player won, if any
		bool check_draw(); // returns if draw exists
		void print(); // prints the board
};

#endif 


