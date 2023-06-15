#include <iostream>
using namespace std;

struct Point
{
	int xpos;
	int ypos;
	// Á¡ÀÇ ÁÂÇ¥ÀÌµ¿
	void MovePos(int x,int y)
	{
		xpos += x;
		ypos += y;

	}
	// Á¡ÀÇ ÁÂÇ¥ Áõ°¡
	void AddPoint(const Point &pos)
	{	
		xpos += pos.xpos;
		ypos += pos.ypos;
	}
	// ÇöÀç x,y ÁÂÇ¥Á¤º¸ Ãâ·Â
	void ShowPosition()
	{
		cout << "ÇöÀç x ÁÂÇ¥ : " << xpos << endl;
		cout << "ÇöÀç y ÁÂÇ¥ : " << ypos << endl;

	}
};

int main(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();

	pos1.AddPoint(pos2);
	pos1.ShowPosition();
	return 0;
}
