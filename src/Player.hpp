#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Object.hpp"
class Player : public Object
{
private:
	bool right, left, up, down;
public:
	Player(sf::Texture &txtr);
	~Player();
	void input(sf::Event &event);
	void draw(sf::RenderWindow &rwin);
	void update(float dt);
};
#endif