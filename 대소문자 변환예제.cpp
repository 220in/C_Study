#include <iostream>
#include <string>

using namespace std;

int main(void){
	// �빮�� --> �ҹ��� + 32 , �ҹ��� --> �빮�� -32
	// �ҹ��ڴ�  97 ����

	// �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ����ϴ� ����
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 90)
			str[i] -= 32;
		else
			str[i] += 32;
	}

	cout << str;
	return 0;

}