# c-basicIoTprogramming

### 1일차
    - 클래스: 내가 직접 만드는 구조체(예를 들어 설계도)
    - 객체: 클래스를 통해 만들어진 변수 (설계도를 통해 만들어진 실제 물건)

    - 오버 로딩: 함수 이름은 같지만 서로 다른 기능을 하는 것
        -c에서는 안되지만 c++에서는 가능하다.

    -매르코 함수의 장점과 inline 선언 
    - 매르코 함수의 장점
    매크로 함수는 정수 뿐만 아니라 실수형으로도 함수를 출력 할수 있다 (

    #define SQUARE(x) ((x)* (x))
    std::cout << SQUARE(5) << std::endl
    std::cout << SQUARe(3.14) << std::endl

   ## inline 함수 
      - 매크로 함수는 왔다갔다 하기 때문에 시간이 오래 걸리지만 inline 함수는 바로 함수 정의가 되기 때문에 속도가 빠르다. 하지만 실수형을 처리하기 위해서는 번거 롭기 때문에 
      template <typename T>
      inline T SQUARE(T x)
      을 사용하여 실수나 정수도 처리할수 있게 한다.    
   ## 이름 공간 기반의 함수 선언과 정의의 분리
    - 함수 안에 또 다른 함수를 정의 하여 출력 하는 방식 
   ## const 함수
    - const함순는 상수화를 시킨다.
        - const int num =10; num을 상수화    시킨다.
        -  const int* num = 10; 데이터를 상수화 하는거지 변수를 통해 주소값을 읽어 변경은 가능하다.
        - int const*num = 10; 변수를 상수화 시키는거지 값을 상수화 시키는것이 아니기에 데이터값을 바꾸면 된다. 
        - const int *const num = 10 둘다 안된다. 
  ## 참조 연산자
    - int &num2 = num1 num2가 num1의 별명이 된다. 
    
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