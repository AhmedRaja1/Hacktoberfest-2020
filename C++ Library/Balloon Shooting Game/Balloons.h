#pragma once
#include "common.h"
#include "Explosion.h"
#include "GameWindow.h"
class Balloons
{
public:
	//Bricks(void);
	//Bricks(void);
	Balloons();
	~Balloons(void);

	GameWindow *gWindow;
	// Bricks
	sf::Texture tx[10];
	sf::Sprite sp[MAX_BALLOONS];
	struct Brick
	{
		sf::Vector2f xy1 ;
		sf::Vector2f xy2;
		Colors balloonColor;
		sf::Sprite sp;
		bool display ;
		//Balloons()
		//{
		//	xy1 = sf::Vector2f(0, 0); // brick default position
		//	xy2 = sf::Vector2f(0, 0); // brick default position
		//	display = true;
		//	balloonColor = Colors::grey;
		//}
	}balloonsList[MAX_BALLOONS];

	vector <string> imageNameSet;
	int imageCnt;
	int spriteCnt;
	// time based brick movement
	sf::Clock balloonMoveTime;
	bool gameOver;
	int shooter_position ;
	int balloonCount;
		// Collision
	sf::Texture explosionTx;
	Explosion explosionList[MAX_BULLETS];

	void LoadImages();
	void setupSprites(int l_x =10, int l_y =10);
	void setupBalloons();
	void setupExplosions();
	void init();
	void draw();
	bool update();
	void updateBalloonsPosition();
	void updateExplosions();
	bool bulletHit(sf::Vector2f bulletPosion, sf::Vector2f bulletNextPosion, Colors bulletColor);
	void findSameColorNeighbors(int b_col , int b_row, set<int> &sameColorset);
	bool lineSegmentIntersction(sf::Vector2f p1, sf::Vector2f p2, sf::Vector2f p3, sf::Vector2f p4);
	int getBalloonCount(){return 	balloonCount;}

};

