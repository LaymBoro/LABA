#include "Color.h"
#include<iostream>

int Color::getRed()
{
	return(red);
}

Color::Color()
{
	setRed(0);
	setGreen(0);
	setBlue(0);
}

int Color::getGreen()
{
	return (green);
}

int Color::getBlue()
{
	return (blue);
}

void Color::setRed(unsigned __int8 red)
{
	this->red = red;
}

void Color::setGreen(unsigned __int8 green)
{
	this->green = green;
}

void Color::setBlue(unsigned __int8 blue)
{
	this->blue = blue;
}

Color::Color(unsigned __int8 red, unsigned __int8 green, unsigned __int8 blue)
{
	setRed(red);
	setGreen(green);
	setBlue(blue);
}

std::ostream& operator<<(std::ostream& out, Color& P)
{
	out << "Color: " << "\nRed: " << P.getRed() << "\nGreen: " << P.getGreen() << "\nBlue: " << P.getBlue();
	return out;
}
