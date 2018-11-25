// overloading
# include <iostream>
using namespace std;

void swap(int &a, int &b) {
	//a是x的參考變數，與x共用同一塊記憶體空間，但有著不同的型別，他是參考變數的型別
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("Call by reference, a=%d and b=%d \n", a, b);

}

void swap(int *a, int *b) {
	//a是x的參考變數，與x共用同一塊記憶體空間，但有著不同的型別，他是參考變數的型別
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

	printf("Call by address, a=%d and b=%d \n", *a, *b);

}


int main() {

	int x = 5;
	int y = 10;

	printf("First swapping\n");
	swap(x, y);
	printf("Second swapping\n");
	swap(&x, &y);


	system("pause");
	return 0;
}