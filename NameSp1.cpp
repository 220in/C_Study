#include <iostream>

namespace  BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}
int main(void)
{
	BestComImp1::SimpleFunc(); // BestCom이 정의한 함수를 이름공간을 통해 구분하고 가져와 쓴다!
	ProgComImp1::SimpleFunc();
	return 0;
}