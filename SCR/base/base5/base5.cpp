// base5 오버 로딩: 오버로딩이란 함수 이름은 하난데 기능은 여러개를 의미한다.
//c++에서는 함수 이름이 같더라도 입력값이 다르면 다른 함수이지만 c언어에서는 같은 함수로 취급한다

//int YourFunc(int num1, int num2 = 5, int num3 = 7)
//
//YourFunc(10); // YourFunc(10,5,7)
//YourFunc(10, 20); // YourFunc(10,20,7)
//
//// default 값은 오른쪽부터 정의가 된다.
//
//int WrongFunc(int num = 10, int num2, num3) // default값은 오른쪽부터 설정 돼야 하는데 왼쪽 부터 설정 되었기 때문에 안된다. 


# include <iostream>
int Adder(int num1 = 1, int num2 = 2);
int main(void)
{
	std::cout << Adder() << std::endl; // c++에서는 이렇게 처음부터 입려값이 정해져 있으면 입력값 없이 함수 선언이 가능하다.
	std::cout << Adder(5) << std::endl; // default값은 오른쪽부터 시작 되므로 이건 Adder(5,2) 이렇게 된다.
	std::cout << Adder(3, 5) << std::endl;
	return 0;
}

int Adder(int num1, int num2)
{
	return num1 + num2;
}