#include <iostream>
using namespace std;

class AAA
{
public:
	// ������
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
	AAA &ref; // �����ڰ� ��������� ���� --> �̴ϼȶ������� ���ؼ� �ʱ�ȭ ����
	const int &num; // const ������ ���� �̴ϼȶ������� ���� ������ ����ε� �ʱ�ȭ ����
public:
	// �̴ϼ� ������
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
	BBB obj2(obj1, 20); // ��ü ���� -- > 9�࿡�� ��ü ������ �����ڰ� ȣ�� �Ǵ� �� Ȯ���ϱ� ���� ��¹� ����
	obj2.ShowYourName();
	return 0;
}