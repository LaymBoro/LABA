#pragma once
#include "Color.h"
class LineStyle
{
private:
	enum types
	{
		solid = 1,
		dash,
		dot,
		dashdot,
		dashdotdot
	};
	types style;
	unsigned int thickness;
	Color color;

public:
	void setStyle(int type);
	void getStyle();
	void styling();
	void setThickness(unsigned int thickness);
	int getThickness();
	friend std::ostream& operator << (std::ostream& out, LineStyle& P);
};

