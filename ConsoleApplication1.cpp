#include <iostream>
using namespace std;
int main() {
	int myArray[] = {2,5,3,9,15,7,8};
	int len = sizeof(myArray)/sizeof(int);
	
	int max = myArray[0];
	cout << "MyArray is:[ ";
	for (int i = 0; i < len; i++) {
		cout << myArray[i] << " ";
		if (myArray[i] > max) {
			max = myArray[i];
		}
	}
	cout <<"]\nMaximum Number is: " <<max << endl;
	cout <<"The Length of MyArray is: " <<len << endl;
	for (int i = max; i >= 1; i--) {
		for (int j = 0; j < len; j++) {
		 if (myArray[j] >= i)
			cout << "*";
		 else
			cout << " ";
	    }
		cout << endl;
	}

	system ("pause>0");
}