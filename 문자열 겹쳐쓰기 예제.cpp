#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s){
	string answer = "";

	//1. �ݺ����� ����� ���
	for (int i = 0; i < overwrite_string.length(); i++){
		// overwrite �κи� ���� �� �ָ� �Ǳ� ������
		// my_string�� s �κк��� overwrite_string�� ���̸�ŭ�� ���� �����ش�.
		my_string[s + i] = overwrite_string[i];

	}
	answer = my_string;
	return answer;
}

	//2. replace �Լ��� ����� ���
string solution2(string my_string, string overwrite_string, int s){
	string answer = "";
					// replace (s����, overwrite�� size ��ŭ, overwrite_string����)
	answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
}