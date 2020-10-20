#pragma once
// program in C++
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <cstdlib>
#include <SFML/Graphics.hpp>

using namespace std;

#define WINDOW_ORIGIN 0
#define WINDOW_ORIGIN_X 100
#define WINDOW_ORIGIN_Y 100
#define WINDOW_WIDTH 900
#define WINDOW_HEIGHT 540

#define BALLOONS_AREA_START_X 100
#define BALLOONS_AREA_START_Y 0
#define BALLOONS_AREA_END_X 850
#define BALLOONS_AREA_END_Y 470
#define BALLOONS_HEIGHT 40
#define BALLOONS_WIDTH 70
#define BALLOONS_MOVE_DIST 10

#define MOVE_BALLOONS_TIME 3 // The time value as a number of seconds.

#define MAX_BALLOONS 200
#define ROW_BALLOONS 20
#define COLUMN_BALLOONS 10

#define SHOOTER_POSITION_X 450
#define SHOOTER_POSITION_Y 470

#define SCORE_POSITION_X 50
#define SCORE_POSITION_Y 470

#define BULLET_CNT_POSITION_X 600
#define BULLET_CNT_POSITION_Y 470

#define MAX_BULLETS 10
#define BULLET_SPEED 1
#define NEXT_BULLET_TIME 0.2 // The time value as a number of seconds.

#define EXPLOSION_TIME 0.2 // The time value as a number of seconds.
#define START_SHOOTER_TIME 1 // The time value as a number of seconds.

#define PI 3.14159265

#define DEBUG 0

// sync the color array with the image arrays
enum Colors { blue, red, grey, purple, yellow, green };
enum Side { top, bottom, left, right };

// try static window base class and
// inherite by others, so there'll be
// one window for all
// Especially it'll help explosion class
