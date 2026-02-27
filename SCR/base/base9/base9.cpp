// base9

#include <iostream>
using namespace std;
int main(void)
{
	//int num1 = 1020;
	//int& num2 = num1; // num2는 num1의 별명이 된다. 
	//num2 = 3047;
	//cout << "VAL: " << num1 << endl;
	//cout << "REF: " << num2 << endl;
	//cout << "VAL : " << &num1 << endl;
	//cout << "VAL : " << &num2 << endl;
	//return 0;

	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;
	int& ref = num;
	int* (&pref) = ptr; // pref가 ptr를 참조 하겠다는건데 ptr이 포인터이기 때문에 앞에 *을 단것이다.
	int** (&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl; // 출력 할때도 *을 붙여야 한다.
	cout << **dpref << endl;
	return 0;
}