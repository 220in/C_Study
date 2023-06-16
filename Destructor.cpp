#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char *name;
	int age;
public:
	Person(char *myname, int myage)
	{	
		// �޸� ���� �Ҵ�
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}

	// �Ҹ���
	~Person()
	{
		delete[] name;
		cout << "called destructor" << endl;
	}
};

