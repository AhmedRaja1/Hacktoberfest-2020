#pragma once
#include "Balloons.h"
#include "GameWindow.h"

//#define SHOOTER_POSITION_X 450
//#define SHOOTER_POSITION_Y 470
class Bullet
{
public:
	sf::Sprite bulletSp;		// bullet image
	sf::Vector2f xy1 ;			// bullet position
	sf::Vector2f direction;		// bullet direction
	bool active ;				// is bullet alive
	float bulletSpeed;			// bullet travelling speed
	Colors color;
	GameWindow *gWindow;

	Bullet();
	~Bullet();
	void initi();
	bool hitBalloon(Balloons &balloons);
	void fly();
	void setSprite(sf::Texture &bulletTx, sf::Vector2f pos);
	void draw(sf::RenderWindow &myWindow);
	void draw();
};
class Bullets
{
public:
	Bullets(Balloons &balloons);
	~Bullets(void);

	GameWindow *gWindow;
	Balloons &balloon;
	bool gameOver;

	// Shooter
	sf::Vector2f shooter_position;
	sf::Texture shooterTx;
	sf::Sprite shooterSp;

	//Bullets
	vector <string> imageNameSet;
	int imageCnt;
	sf::Texture tx[10];
	sf::Texture bulletTx;
	Bullet bulletList[MAX_BULLETS];
	sf::Clock NextBulletWaitTime;
	bool leftMouseClick;
	Colors nextBulletColor;
	Bullet nextBullet;

	int bulletCount;

	// Member Functions
	void LoadImages();
	void setupBullets();
	void draw();
	bool update();
	void updateShooter();
	void updateBullets();
	void shootBullets();
	void chooseNextBulletColor();
	void setupNextBullet();
	void updateNextBullet();
	void drawNextBullet();
	int getBulletCount(){return 	bulletCount;}
	void reset(){bulletCount = 0;}

	Colors randomNumberGen(int limit){return Colors(rand()%limit);};
	sf::Vector2f calcUnitVector(sf::Vector2f p1, sf::Vector2f p2);
};

