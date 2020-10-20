#pragma once
//#include "d:\c++\game_sfml_oops_test\includes\sfml\graphics\renderwindow.hpp"
#include "common.h"

class GameWindow :
	public sf::RenderWindow
{
	 private:
        /* Here will be the instance stored. */
        static GameWindow* gameWindow;

        /* Private constructor to prevent instancing. */
		GameWindow(void);

    public:
        /* Static access method. */
        static GameWindow* getInstance();

};

