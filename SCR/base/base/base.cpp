#include <iostream>

int main(void)
{
	int num = 20;
	//printf("num: %d", num);
	std::cout << "hello world" << std::endl; // std는 객체이고 이 객체에서 cout를 사용하겠다 
	std::cout << "hello" << "world" << std::endl; // endl은 c에서 \n과 같다
	std::cout << num << ' ' << 'a';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}