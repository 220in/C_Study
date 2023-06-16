#ifndef __POINT_H_
#define __POINT_H_

class Point
{
// private �������� ������ ���� ���� �Ǵ� ���� ���� ���� => x,y�� ������ ����!
private:
	int x;
	int y;

public:
	Point(const int &xpos, const int &ypos); // ������
	// ������ ���� �Լ�
	int GetX() const;
	int GetY() const;
	// ������ ���� �Լ�
	bool SetX(int xpos) { return x; };
	bool SetY(int ypos) { return y; };
};
#endif