#pragma once
#include<iostream>


class Color
{
private:
	uint8_t red;
	uint8_t green;
	uint8_t blue;

public:
	Color();
	uint8_t getRed();
	uint8_t getGreen();
	uint8_t getBlue();
	void setRed(uint8_t red);
	void setGreen(uint8_t green);
	void setBlue(uint8_t blue);
	Color(uint8_t red, uint8_t green, uint8_t blue);
	friend std::ostream& operator << (std::ostream& out, Color& P);
};

