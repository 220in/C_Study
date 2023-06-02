#include <iostream>
using namespace std;

int main(void)
{
	int num1 = 1020;
	int &num2 = num1; // num1에 대한 참조자 num2 선언 => num1과 num2가 동일한 메모리 공간 참조
 
	num2 = 3047; // num2에 3047 선언 num1 과 같은 메모리 공간을 할당받았으므로 num1 을 출력하면 3047이 출력됨
	cout << "VAL: " << num1 << endl; // 3047
	cout << "REF: " << num2 << endl; // 3047

	cout << "VAL: " << &num1 << endl; // 주소값을 출력하는 문구 
	cout << "REF: " << &num2 << endl; // num1과 num2의 주소값은 같음

	return 0;
	cout << "sizeof 1:" << sizeof(1) << endl;
}