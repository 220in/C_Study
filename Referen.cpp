#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1; // num1�� ���� ������ num2 ���� => num1�� num2�� ������ �޸� ���� ����
 
	num2 = 3047; // num2�� 3047 ���� num1 �� ���� �޸� ������ �Ҵ�޾����Ƿ� num1 �� ����ϸ� 3047�� ��µ�
	cout << "VAL: " << num1 << endl; // 3047
	cout << "REF: " << num2 << endl; // 3047

	cout << "VAL: " << &num1 << endl; // �ּҰ��� ����ϴ� ���� 
	cout << "REF: " << &num2 << endl; // num1�� num2�� �ּҰ��� ����

	return 0;
	cout << "sizeof 1:" << sizeof(1) << endl;
}