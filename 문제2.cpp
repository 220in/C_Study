#include <iostream>

int main(void)
{	
	char name[100];
	char phone[200];
	std::cout << "�̸��� �Է��ϼ��� :";
	std::cin >> name;
	std::cout << "��ȭ��ȣ�� �Է��ϼ��� :";
	std::cin >> phone;

	std::cout << "�̸�: " << name << std::endl;
	std::cout << "��ȭ��ȣ: " << phone << std::endl;

	return 0;
}