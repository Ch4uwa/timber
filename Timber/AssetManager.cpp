#include "AssetManager.h"

bool AssetManager::load_environment()
{
	
	// load assets
	if (this->texture_bg.loadFromFile(IMG_BACKGROUND))
	{

		this->sprite_bg.setTexture(this->texture_bg);
		this->sprite_bg.setPosition(0, 0);

		if (this->texture_tree.loadFromFile(IMG_TREE))
		{
			this->sprite_tree.setTexture(this->texture_tree);
			this->sprite_tree.setPosition(810, 0);
		}
		else
		{
			std::cerr << "Failed to load tree\n";
			return false;
		}
	}
	else
	{
		std::cerr << "Failed to load background, closing window\n";
		return false;
	}
	return true;
}

void AssetManager::draw(sf::RenderWindow& window)
{
	window.clear();
	window.draw(sprite_bg);
	window.draw(sprite_tree);
	window.display();
}
