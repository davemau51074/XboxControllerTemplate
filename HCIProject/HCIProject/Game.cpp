 #include "Game.h"


Game::Game()





	: m_window(sf::VideoMode(900,600,32), "XboxController", sf::Style::Default)

{


	if (!xboxTexture.loadFromFile("../Release/ASSETS/IMAGES/controller.jpg"))
	{
		cout << "File not found" << endl;

	}
	xboxController.loadFont();

	spriteB.setTexture(xboxTexture);




}


void Game::run()
{

	while (m_window.isOpen())
	{
		render();
		update(m_window);



	}
	

}



void Game::update(sf::Window &window)
{


	xboxController.update(window);
	xboxController.textforLTrigger.setString(std::to_string(xboxController.m_currentState.LTrigger));
	//LEFT
	xboxController.textforLeftThumbStickClick.setString(std::to_string(xboxController.m_currentState.LeftThumbStick.x) + "X");
	xboxController.textforLeftThumbStickClick.setString(std::to_string(xboxController.m_currentState.LeftThumbStick.y) + "Y");
	//RIGHT
	xboxController.textforRightThumbStickClick.setString(std::to_string(xboxController.m_currentState.RightThumbStick.x) + "X");
	xboxController.textforRightThumbStickClick.setString(std::to_string(xboxController.m_currentState.RightThumbStick.y) + "Y");

	

}

void Game::render()
{
	m_window.draw(spriteB);
	m_window.draw(xboxController.forA());
	m_window.draw(xboxController.forB());
	m_window.draw(xboxController.forX());
	m_window.draw(xboxController.forY());
	m_window.draw(xboxController.forRB());
	m_window.draw(xboxController.forLB());
	m_window.draw(xboxController.RightAnalog());
	m_window.draw(xboxController.leftAnalog());	//m_window.draw(xboxController.forBack());
	m_window.draw(xboxController.LTrigger());
	m_window.draw(xboxController.RTrigger());
	m_window.draw(xboxController.DpadX());
	m_window.draw(xboxController.DpadY());
	m_window.draw(xboxController.forStart());
	//m_window.draw(xboxController.LTrigger());
//	m_
	//GameLTrigger() = textforLTrigger;


	//xboxController.textforLTrigger.setColor(sf::Color::Black);
	//xboxController.textforLTrigger.setPosition(72, 442);
	//xboxController.textforLTrigger.setFont(xboxController.poo);


	






	m_window.display();


}




void Game::draw()
{


	if (xboxController.m_currentState.RightThumbStick.x < -15 || xboxController.m_currentState.RightThumbStick.x > 15)
	{
		m_window.draw(xboxController.textforRightThumbStickClick);
	}
	if (xboxController.m_currentState.RightThumbStick.y < -15 || xboxController.m_currentState.RightThumbStick.y > 15)
	{
		m_window.draw(xboxController.textforRightThumbStickClick);
	}
	if (xboxController.m_currentState.LeftThumbStick.x < -15 || xboxController.m_currentState.LeftThumbStick.x > 15)
	{
		m_window.draw(xboxController.textforLeftThumbStickClick);
	}
	if (xboxController.m_currentState.LeftThumbStick.y < -15 || xboxController.m_currentState.LeftThumbStick.y > 15)
	{
		m_window.draw(xboxController.textforLeftThumbStickClick);
	}


}
