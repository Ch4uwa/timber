#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H
#include "includes.h"



class AssetManager
{
private:

	sf::Sprite sprite_bg, sprite_tree;
	sf::Texture texture_bg, texture_tree, texture_cloud, texture_bee;

	float tree_x, tree_y;
	float bg_x, bg_y;

	struct Cloud
	{
		sf::Sprite sprite;
		bool active = false;
		float x{}, y{}, speed{};
	};

	struct Bee
	{
		sf::Sprite sprite;
		bool active = false;
		float x{}, y{}, speed{};
	};

	Bee bee;
	Cloud cloud1, cloud2, cloud3;

public:
	AssetManager(float bg_x = 0.f, float bg_y = 0.f,
		float tree_x = 810.f, float tree_y = 0.f)
		: bg_x(bg_x), bg_y(bg_y), tree_x(tree_x), tree_y(tree_y) {}


	bool load_environment();
	void set_position(float bee_speed = 0.f, float cloud_speed = 0.f,
		float bee_x = 0.f, float bee_y = 800.f);

	void activate_bee(bool bee_active)
	{
		this->bee.active = bee_active;
	}

	void activate_cloud(bool activate1, bool activate2, bool activate3)
	{
		this->cloud1.active = activate1;
		this->cloud2.active = activate2;
		this->cloud3.active = activate3;
	}
	
	void draw(sf::RenderWindow& window);

};

#endif // !ASSETMANAGER_H
