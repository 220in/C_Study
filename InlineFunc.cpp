#include <iostream>
//��ũ�� �Լ� : C�� #define ����ó�� ���ù��� �μ��� �Լ��� ���Ǹ� ���������ν�, �Լ�ó�� �����ϰ��ϴ� ��

inline int SQUARE(int x) // Ű���� inline�� ������ ���� SQUARE��� �Լ� ����
{
	return x*x;
}
int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}