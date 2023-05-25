#include <iostream>
#include <string>

using namespace std;

int main(void){
	// 대문자 --> 소문자 + 32 , 소문자 --> 대문자 -32
	// 소문자는  97 부터

	// 대문자는 소문자로, 소문자는 대문자로 변환하여 출력하는 문제
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