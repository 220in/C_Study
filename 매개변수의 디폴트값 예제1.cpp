#include <iostream>

int Adder(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}
int main(void)
{
	std::cout << Adder() << std::endl; // �ƹ��͵� �������� X, Default�� 1,2 �� ���� 3 ���
	std::cout << Adder(5) << std::endl; // �Ű����� 5 �� ����, num1 = 5, num2 = defalut(2) ���� 7 ���
	std::cout << Adder(3, 5) << std::endl; // 8 ���
	return 0;
}