#include <iostream>
using namespace std;

class SelfRef
{
private :
	int num;
public : 
	SelfRef(int n) : num(n)
	{
		cout << "��ü ����" << endl;

	}
	// ��ü �ڽ��� ������ �� �ִ� ���� ���� ��ȯ�ϵ��� ���� �� �Լ�
	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
	}
	// ��ü �ڽ��� ������ �� �ִ� ���� ���� ��ȯ�ϵ��� ���� �� �Լ�
	SelfRef& ShowTwoNumber()
	{
		cout << num << endl;
		return *this;
	}
};


int main(void)
{	
	SelfRef obj(3);
	// obj�� Adder �Լ��� �������� ��ȯ�ϹǷ� ������ ref �� obj�� �����ϰ� �ȴ�.
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumber();
	obj.ShowTwoNumber();

	// Adder�� ShowTwoNumber�� ���� ���� ��ȯ�ϹǷ� ������ ������ ����
	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
	return 0;
}