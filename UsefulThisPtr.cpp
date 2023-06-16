#include <iostream>
using namespace std;

class TwoNumber
{
private:
	int num1;
	int num2;
public:
	// 매개변수 
	TwoNumber(int num1, int num2)
	{
		// 멤버변수
		this->num1 = num1;
		this->num2 = num2;
	}

	/*TwoNumber(int num1, int num2) : num1(num1), num2(num2)
	{ };*/ 

	void ShowTwoNumber()
	{
		// this 포인터를 사용함으로써, 멤버변수에 접근함을 명확히 하였다.
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();
	return 0;
}