#include "Point.h"

Point::Point(int x, int y)
{
		setX(x);
		setY(y);
}

void Point::setX(int x)
{
	this->x = x;
}

void Point::setY(int y)
{
	this->y = y;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

std::ostream& operator<<(std::ostream& out, Point& P)
{
	std::cout <<"( " << P.getX() << "; " << P.getY() << " )" << "\n";

	return out;
}

std::istream& operator>>(std::istream& in, Point& P)
{
	int x, y;
	std::cout << "coordinates: " << "\n";
	std::cout << "X = ";
	std::cin >> x;
	P.setX(x);
	std::cout << "Y = ";
	std::cin >> y;
	P.setY(y);

	return in;
}
