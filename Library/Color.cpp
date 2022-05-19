#include "Color.h"
#include<iostream>

uint8_t Color::getRed()
{
	return(red);
}

Color::Color()
{
	setRed(0);
	setGreen(0);
	setBlue(0);
}

uint8_t Color::getGreen()
{
	return (green);
}

uint8_t Color::getBlue()
{
	return (blue);
}

void Color::setRed(uint8_t red)
{
	this->red = red;
}

void Color::setGreen(uint8_t green)
{
	this->green = green;
}

void Color::setBlue(uint8_t blue)
{
	this->blue = blue;
}

Color::Color(uint8_t red, uint8_t green, uint8_t blue)
{
	setRed(red);
	setGreen(green);
	setBlue(blue);
}

std::ostream& operator<<(std::ostream& out, Color& P)
{
	out << "Color: " << "\nRed: " << (int)P.getRed() << "\nGreen: " << (int)P.getGreen() << "\nBlue: " << (int)P.getBlue();
	return out;
}
