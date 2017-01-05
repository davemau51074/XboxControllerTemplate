#pragma once 

#include "Xbox360Controller.h"


class Game

{

	public:
		Game();
		void run();





	private:
		void update(sf::Window &window);
		void render();
		void draw();



		sf::Window window;
		sf::RenderWindow m_window;
		sf::Texture xboxTexture;
		sf::Sprite spriteB;
		Xbox360Controller xboxController;

};



