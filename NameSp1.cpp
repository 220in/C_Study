#include <iostream>

namespace  BestComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComImp1
{
	void SimpleFunc(void)
	{
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}
int main(void)
{
	BestComImp1::SimpleFunc(); // BestCom�� ������ �Լ��� �̸������� ���� �����ϰ� ������ ����!
	ProgComImp1::SimpleFunc();
	return 0;
}