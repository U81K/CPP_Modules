#include <iostream>
#include <cstring>
using namespace std;

class point_c
{
		private:
	int x;
	int y;
		public:
	point_c(){
		this->x = 0;
		this->y = 0;
	}
	point_c(int x, int y){
		this->x = x;
		this->y = y;
	}
	void printing(){
		std::cout << "x = " << x << std::endl << "y = " << y << std::endl;
	}

};

int main()
{
	char *str = new char[12]; //using new for allocation
	strcpy(str, "hello world");
	cout << str << endl;
	delete str; // free

	point_c *point = new point_c(5, 4);// (5, 4)in case we have a constractor
	point->printing();
	delete point;

	point_c *points = new point_c[3]; // allocating an array
	points[0] = point_c(3, 2);// args for the constractor
	point[0].printing();
	delete[] points;
}