#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2) // 참조자로 선언된 매개변수
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;

}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(val1, val2); // 변수를 인자로 전달해야한다.
	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;
	return 0;
}