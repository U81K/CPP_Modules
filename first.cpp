#include <iostream>

class test
{
	int x = 0;

	public:
	void setfun(int n)
	{
		x = n;
	}
	void getfun()
	{
		std::cout << x << std::endl;
	}
};

int main()
{
	// test foo;
	// foo.getfun();
	// foo.setfun(10);
	// foo.getfun();
	// std::string hel;
	// std::getline(std::cin, hel);
	// std::cout << hel << std::endl;
	int i;
	std::cin >> i;
	if (std::cin.good())
		std::cout << i <<std::endl;
	else
		std::cout << "error\n";
	// hel = "hello";
	// int i = hel.empty();
	// std::cout << i << std::endl;
	return (0);
}