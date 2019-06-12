#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H
#include "includes.h"
#include <map>


class AssetManager
{
private:
	std::map<std::string, sf::Texture> textures;
	std::map<std::string, sf::Font> fonts;

public:
	// load textures
	void load_texture(std::string name, std::string filename);
	inline sf::Texture& get_texture(std::string name)
	{
		return this->textures.at(name);
	}

	// load fonts
	void load_font(std::string name, std::string filename);
	inline sf::Font& get_font(std::string name)
	{
		return this->fonts.at(name);
	}
};

#endif // !ASSETMANAGER_H
