#include <iostream>
int main(void)
{
	char name[100];
	char lang[200];

	std ::cout << " �̸��� �����Դϱ�?"; // ���
	std::cin >> name; // �Է¹��� �� name �� ����
	
	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
	std::cin >> lang; // �Է¹��� �� lang �� ����

	std::cout << "�� �̸��� " << name << "�Դϴ�.\n"; // ���� �� name �� ���
	std::cout << "���� �����ϴ� ���� " << lang << "�Դϴ�." << std::endl;
	return 0;
}