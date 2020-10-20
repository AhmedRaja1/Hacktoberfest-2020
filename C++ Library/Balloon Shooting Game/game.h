#pragma once
#include "common.h"
#include "Sprite.h"
#include "Balloons.h"
#include "Explosion.h"
#include "Bullets.h"
#include "GameWindow.h"

class Game //:	public sf::RenderWindow
{
public:
	Game(void);
	~Game(void);
	void run();

private:
	// window
	GameWindow *gWindow;
	Balloons balloons;
	Bullets bullets;
	Sprite windowSp;
	Sprite playSp;
	Sprite gameOverSp;
	Explosion explode;
	bool gameOver;
	bool gameStart;
	sf::Clock gameTime;

	// Text Display
	sf::Font font_arial;
	sf::Font font_gothic;
	sf::Text scoreText;
	sf::Text scoreCountText;
	int score;
	sf::Text bulletText;
	sf::Text bulletCountText;
	int bulletCount;


// member functions
	void initialize();
	bool update();
	void setupPlayButton();
	void setupGameOverButton();
	void gameRestart();
	void setupScoreDisplay();
	void updateScoreDisplay();
	void setupText(sf::Text &text, sf::Font &font, sf::String);
};

