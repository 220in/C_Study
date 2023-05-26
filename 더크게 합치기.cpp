#include <string>
#include <vector>

using namespace std;
int solution(int a, int b) {
	int answer = 0;
	// 정수형 a,b 를 모두 string 타입으로 변환
	string a_str = to_string(a);
	string b_str = to_string(b);

	// 문자열 합치기
	string a_b = a_str + b_str;
	string b_a = b_str + a_str;

	if (a_b > b_a){
		answer = stoi(a_b);
	}
	else
		answer = stoi(b_a);
	return answer;
}


int main(){

	
}