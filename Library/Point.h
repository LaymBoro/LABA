#pragma once
#include <iostream>

class Point
{
private:
	int x, y;
public:
	Point(int x = 0, int y = 0);
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	friend std::ostream& operator << (std::ostream& out, Point& P);
	friend std::istream& operator >> (std::istream& in, Point& P);
};

