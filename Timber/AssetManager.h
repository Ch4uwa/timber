#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H
#include "includes.h"

class AssetManager
{
private:
	bool load_success;

	sf::Sprite sprite_bg, sprite_tree;
	sf::Texture texture_bg, texture_tree;
	float tree_x, tree_y;
public:
	AssetManager(float tree_x = 810.f, float tree_y = 0.f):
		tree_x(tree_x), tree_y(tree_y),load_success(true) {}

	void load_environment();

	void draw(sf::RenderWindow);
};

#endif // !ASSETMANAGER_H
