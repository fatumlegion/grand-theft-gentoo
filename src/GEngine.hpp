#ifndef GENGINE_HPP
#define GENGINE_HPP
#include <SFML/Graphics.hpp>
#include "GameState.hpp"
#include <stack>
class GEngine
{
private:
	sf::RenderWindow rwin;
	float resetTime, gameTime;
	sf::Clock resetClock;
	std::stack<GameState*> states;
public:
	GEngine();
	~GEngine();
	int run(int argc, char** argv);
};
#endif