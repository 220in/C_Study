#include <iostream>
//매크로 함수 : C언어에 #define 선행처리 지시문에 인수로 함수의 정의를 전달함으로써, 함수처럼 동작하게하는 것

inline int SQUARE(int x) // 키워드 inline의 선언을 통해 SQUARE라는 함수 정의
{
	return x*x;
}
int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}