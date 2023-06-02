#include <iostream>
using namespace std;

void add1(int &num)
{
	num += 1;
}
void change(int &num2)
{
	num2 *= -1;
}

int main(void)
{
	int input = 1;
	add1(input);

	cout << input << endl;

	int input2 = -10;
	change(input2);
	
	cout << input2 << endl;


}