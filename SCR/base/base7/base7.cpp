// base7.cpp  이름 공간 기반의 함수 선언과 정의의 분리

/*

namespace BestComImp1
{
	void SimpleFunc(void);
}

namespace ProgComImp1
{
	void SimpleFunc(void);
}

int main(void)
{
	BestComImp1::SimpleFunc();
	ProgComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc(void)
{
	std::cout << "BestCom이 정의한 함수" << std::endl;

}
void ProgComImp1::SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;

}


*/
#include <iostream>
double area(int r);

double area(int r)
{
	return 3.14 * r * r;
}

int main(void)
{
	int n = 3;
	char c = '#';
	std::cout << c << 5.5 << n << "hello" << true << std::endl;
	std::cout << "n+5= " << n + 5 << '\n';
	std::cout << "면적은" << area(n);
	return 0;
}