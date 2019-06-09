#ifndef INSECT_H
#define	INSECT_H
#include "includes.h"



class Insect
{
private:

	sf::Texture insect_texture;
	sf::Sprite insect_sprite;

	bool bee_active;
	float bee_speed;

public:
	Insect(sf::Texture, sf::Sprite);



};


class Bee : public Insect
{
private:

public:
	
};

#endif // !INSECT_H
