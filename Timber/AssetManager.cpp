#include "AssetManager.h"

void AssetManager::load_texture(std::string name, std::string filename)
{
	sf::Texture tex;

	if (tex.loadFromFile(filename))
	{
		this->textures[name] = tex;
	}
	else
	{
		std::cerr << "Failed to load " + filename + "\n";
	}
}

void AssetManager::load_font(std::string name, std::string filename)
{
	sf::Font font;

	if (font.loadFromFile(filename))
	{
		this->fonts[name] = font;
	}
}
