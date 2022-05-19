#include "Line.h"

Line::Line()
{
	start;
	end;
	style;
}

void Line::setPoints()
{
	Point start;
	Point end;
	std::cin >> start;
	std::cin >> end;
	this->start = start;
	this->end = end;
}

void Line::print()
{
	int translocationX = end.getX() - start.getX();
	int translocationY = end.getY() - start.getY();
	std::cout << "(" << translocationX << "; " << translocationY << ")";
	std::cout << style;
}

void Line::input()
{
	setPoints();
	style.styling();
}
