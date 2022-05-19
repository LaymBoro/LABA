#include <iostream>
#include "LineStyle.h"



void LineStyle::setStyle(int type)
{
	
	switch (type)
	{
	case types::dash:
		style = dash;
		break;
	case types::dashdot:
		style = dashdot;
		break;
	case types::dashdotdot:
		style = dashdotdot;
		break;
	case types::dot:
		style = dot;
		break;
	case types::solid:
		style = solid;
		break;
	default:
		break;
	}
}

void LineStyle::getStyle()
{
	switch (this->style)
	{
	case types::dash:
		std::cout << "dash";
		break;
	case types::dashdot:
		std::cout << "dashdot";
		break;
	case types::dashdotdot:
		std::cout << "dashdotdot";
		break;
	case types::dot:
		std::cout << "dot";
		break;
	case types::solid:
		std::cout << "solid";
		break;
	default:
		break;
	}
}

void LineStyle::styling()
{
	int type;
	unsigned int thickness;
	int red, green, blue;
	std::cout << "Chose line type: \n" << "solid = 1, dash = 2, dot = 3, dashdot = 4, dashdotdot = 5\n";
	std::cin >> type;
	std::cout << "Chose thickness: \n";
	std::cin >> thickness;
	std::cout << "Chose color: \nRed: \n";
	std::cin >> red;
	std::cout << "Green: \n";
	std::cin >> green;
	std::cout << "Blue: \n";
	std::cin >> blue;
	if(red>255||green>255||blue>255)
	{
		throw 1;
	}
	setStyle(type);
	color.setRed(red);
	color.setGreen(green);
	color.setBlue(blue);
	setThickness(thickness);
}

void LineStyle::setThickness(unsigned int thickness)
{
	this->thickness = thickness;
}

int LineStyle::getThickness()
{
	return (thickness);
}

std::ostream& operator<<(std::ostream& out, LineStyle& P)
{
	out << P.color << "\nLine type: " << P.style << "\nThickness: " << P.thickness;
	return out;
}
