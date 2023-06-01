#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int main(void)
{
	std::cout << Adder() << std::endl; // 아무것도 전달하지 X, Default값 1,2 가 들어가서 3 출력
	std::cout << Adder(5) << std::endl; // 매개변수 5 만 전달, num1 = 5, num2 = defalut(2) 들어가서 7 출력
	std::cout << Adder(3, 5) << std::endl; // 8 출력
	return 0;
}