// base8.cpp 
#include <iostream>
using namespace std;
int main(void)
{
	/*int num1 = 10;
	num1 = 20;

	cout << num1 << endl;*/

	//const int num2 = 10;

	//num2 = 20; // 상수화가 됐기에 실행 되지 않는다.
	//cout << num2 << endl;
	//int num2 = 20;
	
	//const int* p1 = &num2; // const는 데이터를 상수화 하는건지 변수는 바꿀수 있다. > 데이터가 상수화
	//*pi = 10; // 포인터에서 값을 바꾸는건 안된다/
	//int num3 = 22;
	//p1 = &num3;
	//cout << *p1 << endl;
	//cout << num2 << endl;
	/*int n2 = 40;
	int n3 = 30;
	int* const p2 = &n2; > 포인터가 상수화*/ 
	//p2 = &n3; // int 뒤에 const가 적히면 데이터 변경을 가능하지만 변수를 바꿔서 데이터 값을 바꾸는건 안된다.
	/**p2 = 30;
	cout << *p2 << endl;*/
	int n4 = 20;
	int n5 = 10;
	const int* const p1 = &n4; // const int * const p1은 데이터값을 직접적으로 바꾸거나
							   // 변수를 바꿔서 값을 변경하는거 두개다 안된다.
	*p1 = 30;
	*p1 = &n5;
	return 0;
}




