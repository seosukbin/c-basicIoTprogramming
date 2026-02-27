// base4.cpp 
#include <iostream>

int main(void)
{
	char name[200];
	char lang[200];

	std::cout << "이름은 무엇입니까?";
	std::cin >> name;
	std::cout << "좋아하는 프로그래밍 언어는 무엇입니까? ";
	std::cin >> lang;
	std::cout << name <<' '<< lang << std::endl;
	return 0;
}