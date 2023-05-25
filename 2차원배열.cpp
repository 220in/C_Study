#include<iostream>
using namespace std;
int main(){

	int arr[2][4];
	arr[0][0] = 3; 

	int arr[2][4]{};
	cout << "arr Ãâ·Â \n";
	for (int row = 0; row < 2; row++){
		for (int col = 0; col < 4; col++){
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}

}