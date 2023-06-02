#include <iostream>
using namespace std;

bool IsPositive(int num) // num이 0 보다 작거나 같으면 0 을 리턴하고, 아니면 1을 리턴하는 함수
{
	if (num <= 0)
		return false;
	else
		return true;
	
}

int main(void)
{
	bool isPos; // isPos 초기화
	int num; // num 초기화
	cout << "Input number:";
	cin >> num; // 입력한 값을 num변수에 담기

	isPos = IsPositive(num); // 초기화한 변수 isPos를 IsPositive 함수라고 선언
	if (isPos) // 함수
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
	return 0;
}