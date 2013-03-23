#include "GEngine.hpp"
#include "LevelWorld.hpp"
GEngine::GEngine()
{
	gameTime = 1.0f / 100.0f;
}

GEngine::~GEngine()
{
	
}

int GEngine::run(int argc, char** argv)
{
	rwin.create(sf::VideoMode(1067, 600, 32), "GRAND THEFT GENTOO", !sf::Style::Resize | sf::Style::Close);
	
	states.push(new LevelWorld());
	
	while (rwin.isOpen())
	{
		sf::Event event;
		while (rwin.pollEvent(event))
		{
			states.top()->input(event);
			switch (event.type)
			{
				case sf::Event::Closed:
					rwin.close();
				break;
			}
		}
		rwin.clear(sf::Color(0, 102, 255));
		states.top()->draw(rwin);
		resetTime += resetClock.restart().asSeconds();
		while (resetTime > gameTime)
		{
			states.top()->update(gameTime);
			resetTime -= gameTime;
		}
		
		rwin.display();
	}
	return 0;
}