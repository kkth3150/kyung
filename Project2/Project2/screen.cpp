#include <iostream>
#include "screen.h"

using namespace std;

void Screen::Render() 
{
	Background();
	DrawBoard(1,1,11,23);
	NextBlock(15,4,26,10);
	Drawscore(15,13,26,19,10000);


	for (int y = 0; y < SCREEN_HEIGHT; y++)
	{
		for (int x = 0; x < SCREEN_WIDTH; x++) {
			cout << screen[y][x];
		}
		cout << endl;
	}
}


void Screen::Background()
{
	for (int y = 0; y < SCREEN_HEIGHT; ++y) {
		for (int x = 0; x < SCREEN_WIDTH; ++x) {
			screen[y][x] = 'A';
		}
	}

}

void Screen::DrawBoard(int LT_x, int LT_y , int RB_x , int RB_y)
{
	for (int y = LT_y; y < RB_y; ++y) {
		for (int x = LT_x; x < RB_x; ++x) {
			screen[y][x] = ' ';
		}
	}
}

void Screen::NextBlock(int LT_x, int LT_y, int RB_x, int RB_y)
{
	for (int y = LT_y; y < RB_y; ++y) {
		for (int x = LT_x; x < RB_x; ++x) {
			screen[y][x] = ' ';
		}
	}

	memcpy(&screen[LT_y][LT_x+((RB_x-LT_x)/2)-2], "NEXT", 4);

}

void Screen::Drawscore(int LT_x, int LT_y, int RB_x, int RB_y, int score)
{
	for (int y = LT_y; y < RB_y; ++y) {
		for (int x = LT_x; x < RB_x; ++x) {
			screen[y][x] = ' ';
		}
	}

	memcpy(&screen[LT_y][LT_x + ((RB_x - LT_x)/2) - 2], "SCORE", 5);
}
