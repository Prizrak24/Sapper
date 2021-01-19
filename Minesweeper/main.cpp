#include <SFML/Graphics.hpp>
#include "MinesweeperGame.h"
using namespace sf;

int main()
{
	RenderWindow window(VideoMode(1376, 768), "SFMLworks");
	MinesweeperGame game;
	game.Rendering(window);
	// Это коментарий 2
	return 0;
}