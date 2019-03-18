#include <iostream>
using namespace std;

void printArray(int a[], int b[], const int asize, const int bsize, int i, int j);

int main() {

	int a[] = { 1,3,5 };
	int asize = sizeof(a) / sizeof(a[0]);

	int b[] = { 2,4,6,8 };
	int bsize = sizeof(b) / sizeof(b[0]);

	printArray(a, b, asize, bsize, 0, 0);

	system("pause");
	return 0;
}

void printArray(int a[], int b[], const int asize, const int bsize, int i, int j) {

	//print in order
	/*
	if(j==0 && i < asize){
	  std::cout << a[i] << " ";
	  printArray(a,b, asize, bsize,i+1,j);
	}

	if(i==0 && j < bsize){
	  std::cout << b[j] << " ";
	  printArray(a,b, asize, bsize,i,j+1);
	}
	*/

	// print reverse order
	 ///*
	if (j == 0 && i < asize) {
		printArray(a, b, asize, bsize, i + 1, j);
		std::cout << a[i] << " ";
	}

	if (i == 0 && j < bsize) {
		printArray(a, b, asize, bsize, i, j + 1);
		std::cout << b[j] << " ";
	}
	 //*/
}