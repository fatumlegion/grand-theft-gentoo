#ifndef OBJECT_HPP
#define OBJECT_HPP
#include <SFML/Graphics.hpp>
class Object
{
public:
	virtual void draw(sf::RenderWindow &rwin) = 0;
	virtual void input(sf::Event &event) = 0;
	virtual void update(float dt) = 0;
protected:
	sf::Sprite self;
	float x, y;
};
#endif