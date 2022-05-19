#pragma once
#include "Figure.h"
#include "LineStyle.h"
#include "Point.h"

class Line : public Figure
{
private:
	Point start;
	Point end;
	LineStyle style;

public:
	Line();
	void setPoints();
	void print() override;
	void input() override;
};

