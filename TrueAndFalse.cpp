#include <iostream>
using namespace std;

int main(void)
{
	int num = 10;
	int i = 0;
	
	cout << "true :" << true << endl; // true 출력 했을 때 --> 1 (true 가 1을 의미하는 것이 아닌, 1바이트 크기의 데이터일 뿐)
	cout << "false : " << false<< endl; // false 출력 했을 때 --> 0

	while (true)
	{
		cout << i++ << ' ';
		if (i > num)
			break;

	}
	cout << endl;

	cout << "sizeof 1:" << sizeof(1) << endl;
	cout << "sizeof 0:" << sizeof(0) << endl;
	cout << "sizeof true :" << sizeof(true) << endl;
	cout << "sizeof false :" << sizeof(false) << endl;

	return 0;
}