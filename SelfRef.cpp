#include <iostream>
using namespace std;

class SelfRef
{
private :
	int num;
public : 
	SelfRef(int n) : num(n)
	{
		cout << "객체 생성" << endl;

	}
	// 객체 자신을 참조할 수 있는 참조 값을 반환하도록 정의 된 함수
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
	}
	// 객체 자신을 참조할 수 있는 참조 값을 반환하도록 정의 된 함수
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};


int main(void)
{	
	SelfRef obj(3);
	// obj의 Adder 함수는 참조값을 반환하므로 참조자 ref 는 obj를 참조하게 된다.
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumber();
	obj.ShowTwoNumber();

	// Adder와 ShowTwoNumber가 참조 값을 반환하므로 구성이 가능한 문장
	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}