#include "Line.h"

Line::Line()
{
	start = Point();
	end = Point();
	style = LineStyle{};
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
	std::cout << "\n(" << translocationX << "; " << translocationY << ")\n";
	std::cout << style;
}

void Line::input()
{
	setPoints();
	style.styling();
}
