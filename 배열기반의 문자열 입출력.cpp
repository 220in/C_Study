#include <iostream>
int main(void)
{
	char name[100];
	char lang[200];

	std ::cout << " 이름은 무엇입니까?"; // 출력
	std::cin >> name; // 입력받은 값 name 에 저장
	
	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요?";
	std::cin >> lang; // 입력받은 값 lang 에 저장

	std::cout << "내 이름은 " << name << "입니다.\n"; // 저장 된 name 값 출력
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;
	return 0;
}