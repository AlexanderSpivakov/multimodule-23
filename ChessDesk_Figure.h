#pragma once

#ifndef CHESS_LIBRARY_H
#define CHESS_LIBRARY_H


#include <vector>
#include <windows.h>
#include <memory>


class ChessPiece {
protected:
	char symbol;

public:
	ChessPiece(char s) : symbol(s) {}
	char getSymbol() const { return symbol; }
};

class King : public ChessPiece {
public:
	King(char s) : ChessPiece(s) {}
};

class Queen : public ChessPiece {
public:
	Queen(char s) : ChessPiece(s) {}
};

class Rook : public ChessPiece {
public:
	Rook(char s) : ChessPiece(s) {}
};

class Bishop : public ChessPiece {
public:
	Bishop(char s) : ChessPiece(s) {}
};

class Knight : public ChessPiece {
public:
	Knight(char s) : ChessPiece(s) {}
};

class Pawn : public ChessPiece {
public:
	Pawn(char s) : ChessPiece(s) {}
};

class ChessBoard {
private:
	std::vector<std::vector<std::shared_ptr<ChessPiece>>> board;

public:
	ChessBoard() : board(8, std::vector<std::shared_ptr<ChessPiece>>(8, nullptr)) {}

	void setPiece(int row, int col, std::shared_ptr<ChessPiece> piece) {
		board[row][col] = piece;
	}

	std::shared_ptr<ChessPiece> getPiece(int row, int col) {
		return board[row][col];
	}
};



#endif // CHESS_LIBRARY_H