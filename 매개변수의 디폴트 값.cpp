#include<iostream>

int MyFuncOne(int num = 7) // 함수호출 시 인자를 전달하지 않으면 7이 전달된 것으로 간주하겠다는 뜻(이것이 디폴트값!)
{
	return num + 1;
}
int MyFuncTwo(int num1 = 5, int num2 = 7)
{
	return num1 + num2;
}