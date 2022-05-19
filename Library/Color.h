#pragma once
#include<iostream>

class Color
{
private:
	unsigned __int8 red;
	unsigned __int8 green;
	unsigned __int8 blue;

public:
	Color();
	int getRed();
	int getGreen();
	int getBlue();
	void setRed(unsigned __int8 red);
	void setGreen(unsigned __int8 green);
	void setBlue(unsigned __int8 blue);
	Color(unsigned __int8 red, unsigned __int8 green, unsigned __int8 blue);
	friend std::ostream& operator << (std::ostream& out, Color& P);
};

