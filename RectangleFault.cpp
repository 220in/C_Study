#include <iostream>
using namespace std;
class Point
{
// public ���� ����Ǿ ��𼭵� ������ ���� 
public :
	int x; 
	int y; 
};

// ���簢�� �Լ�
class Rectangle
{
public:
	// ��� ����
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo()
	{
		cout << "�� ���: " << '[' << upLeft.x << ",";
		cout << upLeft.y<< ']' << endl;
		cout << "�� �ϴ�: " << '[' << lowRight.x << ",";
		cout << lowRight.y << ']' << endl << endl;
	}
};
int main(void)
{
	// 2���� Point ��ü ����
	Point pos1 = { -2, 4 };
	Point pos2 = { 5, 9 };
	// Point ��ü�� �̿��Ͽ� Rectangle ��ü ���� �� �ʱ�ȭ
	Rectangle rec = { pos2, pos1 };
	rec.ShowRecInfo();
	return 0;
}