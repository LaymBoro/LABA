#include"C:\Users\LaymB\source\repos\LABA\Library\Line.h"

int main()
{
	Line line;
	line.input();
	try
	{
		line.print();
	}catch(...)
	{
		std::cout << "RGB<256!";
	}
	
	return 0;
}