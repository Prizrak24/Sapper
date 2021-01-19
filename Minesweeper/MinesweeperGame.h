#include <SFML/Graphics.hpp>
#include "windows.h"

using namespace std;

using namespace sf;

#ifndef MINESWEEPER_GAME_H
#define MINESWEEPER_GAME_H
class MinesweeperGame{
public:
	int minesweeperWidth;
	int minesweeperHeight;
	int mines;
	int position;
public:
	MinesweeperGame();
	void Rendering(RenderWindow& window);
private:
	int windowMenu(RenderWindow& window);
	int windowSettings(RenderWindow& window);
	int windowGame(RenderWindow& window);
	void traversalRecursion1(int **& gridLogic, int **& gridView, int X, int Y);
	void checkMine(int**& gridLogic, int**& gridView, int x, int y, int &gameOver);
	void openCells(int**& gridLogic, int**& gridView, int x, int y, int &gameOver);
};

#endif