#include <iostream>
using namespace std;

class LetDebug
{
public:
	void printNum()
	{
		uint16_t s1 = 32767;
		uint16_t s2 = 1;
		uint16_t s3 = s1 + s2;
		std::cout << s3 << std::endl;
	}
};

int main()
{
	LetDebug* ld = new LetDebug;

	cout << "Version 2" << endl;
	ld->printNum();

	return 0;
}
