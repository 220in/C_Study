#include <iostream>
using namespace std;

int main(void)
{
	int num = 12;
	// * : 포인터 , 주소값을 저장하는 변수(일반변수의 주소값을 저장함)
	// **: 포인터 변수의 주소값을 저장함 (이중 포인터)
	// & : 주소값을 나타내주는 기호
	int *ptr = &num;
	int **dptr = &ptr;

	int &ref = num;
	int *(&pref) = ptr;
	int **(&dpref) = dptr;

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;
	return 0;
}