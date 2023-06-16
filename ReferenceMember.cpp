#include <iostream>
using namespace std;

class AAA
{
public:
	// 생성자
	AAA()
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	AAA &ref; // 참조자가 멤버변수로 선언 --> 이니셜라이저를 통해서 초기화 진행
	const int &num; // const 참조자 선언 이니셜라이저를 통해 정수형 상수로도 초기화 가능
public:
	// 이니셜 라이즈
	BBB(AAA &r, const int &n)
		:ref(r), num(n)
	{
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num" << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20); // 객체 생성 -- > 9행에서 객체 생성시 생성자가 호출 되는 지 확인하기 위해 출력문 삽입
	obj2.ShowYourName();
	return 0;
}