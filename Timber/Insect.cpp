#include "Insect.h"



Insect::Insect(sf::Texture insect_texture, sf::Sprite insect_sprite):
	insect_texture(insect_texture), insect_sprite(insect_sprite)
{
	this->bee_active = false;
	this->bee_speed = 0.0f;
}

