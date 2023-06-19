#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void ShowData() const
	{
		cout << "num:" << num << endl;
	}
};

int main(void)
{	
	// const ��ü ����
	const SoSimple obj(7);
	// obj.AddNum(20); ==> const �Լ��� X
	obj.ShowData(); 
	return 0;
}