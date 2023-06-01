#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;

}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{	

	// 각각의 함수를 호출하고 호출되었는지 함수안의 출력문을 통해서 확인한다.
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;

}