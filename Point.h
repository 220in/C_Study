#ifndef __POINT_H_
#define __POINT_H_

class Point
{
// private 선언으로 임의의 값이 저장 되는 것을 막아 놓음 => x,y의 정보를 은닉!
private:
	int x;
	int y;

public:
	Point(const int &xpos, const int &ypos); // 생성자
	// 저장을 위한 함수
	int GetX() const;
	int GetY() const;
	// 참조를 위한 함수
	bool SetX(int xpos) { return x; };
	bool SetY(int ypos) { return y; };
};
#endif