#include <iostream>

int main(void)
{	
	int inputNum;
	std::cout << "숫자를 입력하세요 :";
	std::cin >> inputNum;
	for (int i = 1; i < 10; i++){
		std::cout << inputNum << "*" << i <<" = "<<inputNum*i << std::endl;
	}
	return 0;
}