//#include "pch.h"
#include "Module_1.h"
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <windows.h>

King::King(char s) : ChessPiece(s) {};
Queen:: Queen(char s) : ChessPiece(s) {};
Rook::Rook(char s) : ChessPiece(s) {};
Bishop::Bishop(char s) : ChessPiece(s) {};
Knight::Knight(char s) : ChessPiece(s) {};
Pawn::Pawn(char s) : ChessPiece(s) {};
ChessBoard::ChessBoard() : board(8, std::vector<std::shared_ptr<ChessPiece>>(8, nullptr)) {}
std::vector<std::vector<std::shared_ptr<ChessPiece>>> board;

	void setPiece(int row, int col, std::shared_ptr<ChessPiece> piece) {
		board[row][col] = piece;
	}

	std::shared_ptr<ChessPiece> getPiece(int row, int col) {
		return board[row][col];
	}


class Desk {

	void showDesk() {

	};

	int main() {
		ChessBoard chessboard;
		Desk desk;

		chessboard.setPiece(0, 0, std::make_shared<Rook>('R'));
		chessboard.setPiece(0, 1, std::make_shared<Knight>('N'));
		chessboard.setPiece(0, 2, std::make_shared<Bishop>('B'));
		chessboard.setPiece(0, 3, std::make_shared<Queen>('Q'));
		chessboard.setPiece(0, 4, std::make_shared<King>('K'));
		chessboard.setPiece(0, 5, std::make_shared<Bishop>('B'));
		chessboard.setPiece(0, 6, std::make_shared<Knight>('N'));
		chessboard.setPiece(0, 7, std::make_shared<Rook>('R'));

		for (int i = 0; i < 8; i++) {
			chessboard.setPiece(1, i, std::make_shared<Pawn>('P'));
			chessboard.setPiece(6, i, std::make_shared<Pawn>('p'));
		}

		chessboard.setPiece(7, 0, std::make_shared<Rook>('R'));
		chessboard.setPiece(7, 1, std::make_shared<Knight>('N'));
		chessboard.setPiece(7, 2, std::make_shared<Bishop>('B'));
		chessboard.setPiece(7, 3, std::make_shared<Queen>('Q'));
		chessboard.setPiece(7, 4, std::make_shared<King>('K'));
		chessboard.setPiece(7, 5, std::make_shared<Bishop>('B'));
		chessboard.setPiece(7, 6, std::make_shared<Knight>('N'));
		chessboard.setPiece(7, 7, std::make_shared<Rook>('R'));

		// Вывод фигур на шахматной доске
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				auto piece = chessboard.getPiece(i, j);
				if (piece != nullptr) {
					std::cout << piece->getSymbol() << ' ';
				}
				else {
					std::cout << ". ";
				}
			}
			std::cout << std::endl;
		}

		desk.showDesk();

		return 0;
	}
};