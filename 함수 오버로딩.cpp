#include <iostream>

int MyFunc(int num)   // 같은 이름을 가진 함수 2개
{
	num++;
	return num;
}

int MyFunc(int a, int b)
{
	return a + b;
}

int main(void)
{
	MyFunc(20); // MyFunc(int num) 함수 호출
	MyFunc(30, 40); // MyFunc (int a, int b ) 함수 호출
	
	// => 함수 호출 시 전달 되는 인자를 통해 호출하고자하는 함수의 구분이 가능
	// => 그렇기 때문에, 함수의 오버로딩이 가능하려면 매개변수의 선언이 달라야한다.
	return 0;
}