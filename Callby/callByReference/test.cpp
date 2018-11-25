// call by reference
# include <iostream>
using namespace std;

void swap(int &a, int &b) {
	//a是x的參考變數，與x共用同一塊記憶體空間，但有著不同的型別，他是參考變數的型別
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("In the swapping method, a=%d and b=%d \n", a, b);

}

int main() {

	int x = 5;
	int y = 10;

	printf("Before swapping, x=%d and y=%d \n", x, y);

	swap(x, y);

	printf("After swapping, x=%d and y=%d \n", x, y);

	system("pause");
	return 0;
}