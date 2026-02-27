// base6.cpp 매르코 함수의 장점과 inline 선언

/*
#define SQUARE(x) ((x)*(x)) // 매르코 함수
#include <iostream>
int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(3.14) << std::endl;
	return 0;
}
*/

/*
매크로 함수는 정수 뿐만 아니라 실수형으로도 함수를 출력 할수 있다 ()

ex)#define SQUARE(x) ((x)* (x))

std::cout << SQUARE(5) << std::endl
std::cout << SQUARe(3.14) << std::endl

inline은 각 자료형 별로 함수가 오버 로딩 돼야 한다.

그래서
template <typename T>
inline T SQUARE(T x)
{
	return x * x;
}




inline int SQUARE(int x) // inline화를 하면 매크로 함수 호출시 해당 함수로 가서 다시 내려 와야 하는데
						// linline은 그 자리에서 함수 정의가 되므로 속도가 빨라진다는 장점이 있다
{
	return x * x;
}
 이렇게 하면 inline도 실수형이 가능하다.

*/
 
