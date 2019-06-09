#include "AssetManager.h"

bool AssetManager::load_environment()
{
	// load assets
	if (this->texture_bg.loadFromFile(IMG_BACKGROUND))
	{
		if (this->texture_cloud.loadFromFile(IMG_CLOUD))
		{
			if (this->texture_tree.loadFromFile(IMG_TREE))
			{
				if (this->texture_bee.loadFromFile(IMG_BEE))
				{
					// If load is success, set sprites
					this->sprite_bg.setTexture(this->texture_bg);

					this->sprite_tree.setTexture(this->texture_tree);

					this->cloud1.sprite.setTexture(this->texture_cloud);
					this->cloud2.sprite.setTexture(this->texture_cloud);
					this->cloud3.sprite.setTexture(this->texture_cloud);

					this->bee.sprite.setTexture(this->texture_bee);
				}
			}
		}
	}
	else
	{
		std::cerr << "Failed to load texture\n";
		return false;
	}
	return true;
}

void AssetManager::set_position(float bee_speed, float cloud_speed,
	float bee_x, float bee_y)
{
	this->cloud1.speed = cloud_speed;
	this->cloud2.speed = (cloud_speed * 1.2f);
	this->cloud3.speed = (cloud_speed * 1.3f);

	this->bee.speed = bee_speed;
	this->bee.x = bee_x;
	this->bee.y = bee_y;

	this->sprite_bg.setPosition(this->bg_x, this->bg_y);

	this->sprite_tree.setPosition(this->tree_x, this->tree_y);

	this->cloud1.sprite.setPosition(this->cloud1.x, this->cloud1.y);
	this->cloud2.sprite.setPosition(this->cloud2.x, (this->cloud2.y + 250.f));
	this->cloud3.sprite.setPosition(this->cloud3.x, (this->cloud3.y + 500.f));

	this->bee.sprite.setPosition(this->bee.x, this->bee.y);
}

void AssetManager::draw(sf::RenderWindow& window)
{
	window.draw(this->sprite_bg);
	
	if (cloud1.active)
	{
		window.draw(this->cloud1.sprite);
	}
	
	if (cloud2.active)
	{
		window.draw(this->cloud2.sprite);
	}
	
	if (cloud3.active)
	{
		window.draw(this->cloud3.sprite);
	}

	window.draw(this->sprite_tree);
	
	if (bee.active)
	{
		window.draw(this->bee.sprite);
	}
}
