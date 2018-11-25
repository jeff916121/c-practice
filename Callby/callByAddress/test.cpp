// call by pointer(address)
# include <iostream>
using namespace std;

void swap(int *a, int *b) {
	// a跟b是指標變數，dereference後是整數變數或整數陣列
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	printf("In the swapping method, a=%d and b=%d \n", *a, *b);

}

int main() {

	int x = 5;
	int y = 10;

	printf("Before swapping, x=%d and y=%d \n", x, y);


	swap(&x, &y);
	//這邊要記得傳位址進去

	printf("After swapping, x=%d and y=%d \n", x, y);

	system("pause");
	return 0;
}