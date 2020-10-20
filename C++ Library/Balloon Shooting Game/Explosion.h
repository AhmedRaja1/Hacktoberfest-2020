#pragma once
#include "common.h"
#include "GameWindow.h"
class Explosion
{
public:
	Explosion(void);
	~Explosion(void);

	sf::Sprite explosionSp;		// Explosion image
	sf::Vector2f xy1 ;			// Explosion position
	//sf::Vector2f direction;		// bullet direction
	bool active ;				// is Explosion alive
	//float bulletSpeed;			// bullet travelling speed
	sf::Clock life;
	GameWindow *gWindow;

	void initi();
	//void hitBrick(Bricks &bricks);
	//void fly();
	void setSprite(sf::Texture &explosionTx, sf::Vector2f pos);
	void setExplode(sf::Vector2f position);
	void update();
	void draw(sf::RenderWindow &myWindow);
	void draw();
};

