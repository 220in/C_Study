#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s){
	string answer = "";

	//1. 반복문을 사용한 방법
	for (int i = 0; i < overwrite_string.length(); i++){
		// overwrite 부분만 수정 해 주면 되기 때문에
		// my_string의 s 부분부터 overwrite_string의 길이만큼만 덮어 씌여준다.
		my_string[s + i] = overwrite_string[i];

	}
	answer = my_string;
	return answer;
}

	//2. replace 함수를 사용한 방법
string solution2(string my_string, string overwrite_string, int s){
	string answer = "";
					// replace (s부터, overwrite의 size 만큼, overwrite_string에서)
	answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
}