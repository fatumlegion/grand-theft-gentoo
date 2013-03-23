#include "Player.hpp"
#include "Helper.hpp"
#include <math.h>

Player::Player(sf::Texture &txtr)
{
	self.setTexture(txtr);
	self.setOrigin((self.getTextureRect().width / 2) + 5, (self.getTextureRect().height / 2) - 4);	
	
	x = 350;
	y = 350;
	
	right = false;
	left = false;
	up = false;
	down = false;
}

Player::~Player()
{

}

void Player::input(sf::Event &event)
{
	switch (event.type)
	{
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::D)
			{
				right = true;
			}
			
			if (event.key.code == sf::Keyboard::A)
			{
				left = true;
			}
			
			if (event.key.code == sf::Keyboard::W)
			{
				up = true;
			}
			
			if (event.key.code == sf::Keyboard::S)
			{
				down = true;
			}
		break;
		case sf::Event::KeyReleased:
			if (event.key.code == sf::Keyboard::D)
			{
				right = false;
			}
			
			if (event.key.code == sf::Keyboard::A)
			{
				left = false;
			}
			
			if (event.key.code == sf::Keyboard::W)
			{
				up = false;
			}
			
			if (event.key.code == sf::Keyboard::S)
			{
				down = false;
			}
		break;
	}
}

void Player::draw(sf::RenderWindow &rwin)
{
	rwin.draw(self);
}

void Player::update(float dt)
{
	self.setPosition(x, y);
	
	float dx = sf::Mouse::getPosition().x - x;
	float dy = sf::Mouse::getPosition().y - y;
	sf::Vector2i p = sf::Vector2i(dx, dy);
	self.setRotation(atan2(p.y, p.x) * (180 / Helper::getPI()));
	
	if (right == true && left == false)
	{
		x += dt * 150;
	}
	
	if (right == false && left == true)
	{
		x -= dt * 150;
	}
	
	if (down == true && up == false)
	{
		y += dt * 150;
	}
	
	if (down == false && up == true)
	{
		y -= dt * 150;
	}
}
