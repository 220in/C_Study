#include <iostream>

int MyFunc(int num)   // ���� �̸��� ���� �Լ� 2��
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
	MyFunc(20); // MyFunc(int num) �Լ� ȣ��
	MyFunc(30, 40); // MyFunc (int a, int b ) �Լ� ȣ��
	
	// => �Լ� ȣ�� �� ���� �Ǵ� ���ڸ� ���� ȣ���ϰ����ϴ� �Լ��� ������ ����
	// => �׷��� ������, �Լ��� �����ε��� �����Ϸ��� �Ű������� ������ �޶���Ѵ�.
	return 0;
}