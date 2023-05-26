#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
	int answer = 0;

	string a_str = to_string(a);
	string b_str = to_string(b);
	string a_b = a_str + b_str;
	
	if (stoi(a_b) > 2 *a*b)
		answer = stoi( a_b);
	else
		answer = 2 * a*b;
	return answer;
}