#include "LevelWorld.hpp"

LevelWorld::LevelWorld()
{
	ac = new AssetContainer();
	ac->addTexture("player", "res/images/player.png");
	
	player = new Player(*ac->getTexture("player"));
}

LevelWorld::~LevelWorld()
{
	delete ac;
	delete player;
}

void LevelWorld::input(sf::Event &event)
{
	player->input(event);
}

void LevelWorld::draw(sf::RenderWindow &rwin)
{
	player->draw(rwin);
}

void LevelWorld::update(float dt)
{
	player->update(dt);
}
