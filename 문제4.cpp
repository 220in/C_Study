#include <iostream>


int main(void)
{	
	double inputNum;
	int result = 0;
	while (true){
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end) :";
		std::cin >> inputNum;
		if (inputNum == -1)
			break;
		
		result = 50 + inputNum*0.12;
		std::cout << "�̹� �� �޿� :" << result << "����" << std::endl;
		
	}
	std::cout << "���α׷��� �����մϴ�." << std::endl;
	
	return 0;
}