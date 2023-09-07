#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	std::string line = "This is a test. Test is important. This is a test, not a quiz.";
	std::string s1 = "test";
	std::string s2 = "zbi";

	int pos = 0;
	while ((pos = line.find(s1)) != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
	}
	std::cout << line << std::endl;

}