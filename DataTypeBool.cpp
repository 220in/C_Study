#include <iostream>
using namespace std;

bool IsPositive(int num) // num�� 0 ���� �۰ų� ������ 0 �� �����ϰ�, �ƴϸ� 1�� �����ϴ� �Լ�
{
	if (num <= 0)
		return false;
	else
		return true;
	
}

int main(void)
{
	bool isPos; // isPos �ʱ�ȭ
	int num; // num �ʱ�ȭ
	cout << "Input number:";
	cin >> num; // �Է��� ���� num������ ���

	isPos = IsPositive(num); // �ʱ�ȭ�� ���� isPos�� IsPositive �Լ���� ����
	if (isPos) // �Լ�
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
	return 0;
}