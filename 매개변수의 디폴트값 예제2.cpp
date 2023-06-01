#include <iostream>
int BoxVolum(int length, int width = 1, int height = 1); // 첫번째 매개변수에는 디폴트 값이 지정되지 않았으므로, BoxVolume 함수를 호출할 때는 반드시 하나 이상의 인자를 전달해야한다.



int main(void)
{
	std::cout << "[3,3,3] : " << BoxVolum(3, 3, 3) << std::endl;
	std::cout << "[5,5,D] : " << BoxVolum(5, 5) << std::endl;
	std::cout << "[7,D,D] : " << BoxVolum(7) << std::endl;
	// std::cout << "[D,D,D] : " << BoxVolum() << std::endl;
	return 0;
}

int BoxVolum(int length, int width, int height)
{
	return length*width*height;
}