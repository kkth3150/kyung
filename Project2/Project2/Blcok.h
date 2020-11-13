#pragma once

enum TYPE { T, L, O, Z, I, rL, rZ, count };







struct Point {
	int x, y;

	Point() { x = 0; y = 0; }
	Point(int px, int py) { x = px; y = py;}
};

Point bricks[count][4] = {
	{{-1, 0}, {0, 0}, {1, 0}, {0, 1}},    // T
	{{0, -2}, {0, -1}, {0, 0}, {1, 0}},    // L
	{{0, 0}, {1, 0},{0, 1}, {1, 1}},    // O
	{{-1, 0}, {0, 0},{0, 1}, {1, 1}},    // Z
	{{0, -1},{0, 0},{0, 1},{0, 2}},        // I
	{{0, -2}, {0, -1}, {0, 0}, {-1, 0}},	//rL
    {{0, 0}, {1, 0},{-1, 1}, {0, 1}}        //rZ 
};

class Block {
public:

	Point positon;
	TYPE type;
	Point bricks[4];


public:
	Block(Point p, TYPE t)
	{

	}
};