#ifndef ASSETCONTAINER_HPP
#define ASSETCONTAINER_HPP
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Thor/Graphics/BigTexture.hpp"
#include <map>
#include <string>
class AssetContainer
{
private:
	std::map<std::string, sf::Texture*> cont_textures;
	std::map<std::string, thor::BigTexture*> cont_bigTextures;
	std::map<std::string, sf::Music*> cont_music;
	std::map<std::string, sf::Font*> cont_fonts;
public:
	AssetContainer();
	~AssetContainer();
	void addTexture(std::string name, std::string path);
	void addBigTexture(std::string name, std::string path);
	void addMusic(std::string name, std::string path);
	void addFont(std::string name, std::string path);

	sf::Texture *getTexture(std::string name);
	thor::BigTexture *getBigTexture(std::string name);
	sf::Music *getMusic(std::string name);
	sf::Font *getFont(std::string name);
};
#endif