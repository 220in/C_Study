#include <iostream>
using namespace std;

void SwapPointer(int *(&input1), int *(&input2))
{
	int * temp = input1;
	input1 = input2;
	input2 = temp;

}


int main(void)
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;
	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;


}