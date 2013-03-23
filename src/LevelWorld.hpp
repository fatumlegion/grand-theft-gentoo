#ifndef LEVELWORLD_HPP
#define LEVELWORLD_HPP
#include "GameState.hpp"
#include "AssetContainer.hpp"
#include "Player.hpp"
class LevelWorld : public GameState
{
private:
	AssetContainer *ac;
	Player *player;
public:
	LevelWorld();
	~LevelWorld();
	void input(sf::Event &event);
	void draw(sf::RenderWindow &rwin);
	void update(float dt);
};
#endif