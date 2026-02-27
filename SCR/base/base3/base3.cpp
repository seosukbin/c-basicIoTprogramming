#include <iostream>

int main(void)
{
	std::string name;
	int val1;
	std::cout << "이름을 입력 하세요: ";
	std::cin >>val1 >> name;
	std::cout << val1 << name << std::endl;

	return 0;
}