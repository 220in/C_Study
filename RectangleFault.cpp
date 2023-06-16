#include <iostream>
using namespace std;
class Point
{
// public 으로 선언되어서 어디서든 접근이 가능 
public :
	int x; 
	int y; 
};

// 직사각형 함수
class Rectangle
{
public:
	// 멤버 변수
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "좌 상단: " << '[' << upLeft.x << ",";
		cout << upLeft.y<< ']' << endl;
		cout << "우 하단: " << '[' << lowRight.x << ",";
		cout << lowRight.y << ']' << endl << endl;
	}
};
int main(void)
{
	// 2개의 Point 객체 생성
	Point pos1 = { -2, 4 };
	Point pos2 = { 5, 9 };
	// Point 객체를 이용하여 Rectangle 객체 생성 및 초기화
	Rectangle rec = { pos2, pos1 };
	rec.ShowRecInfo();
	return 0;
}