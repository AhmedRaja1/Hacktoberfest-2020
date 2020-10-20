#pragma once
//#include "SFML\graphics\sprite.hpp"
#include "common.h"

class Sprite
{
public:
	Sprite(void);
	Sprite(string);
	~Sprite(void);
	void loadSprite(string);
	sf::Sprite get(){return Sp;}

	sf::Texture Tx;
	sf::Sprite Sp;
	sf::Vector2f Position;

	void setPosition(sf::Vector2f Position);
	void setOrigin(sf::Vector2f Position);
};

