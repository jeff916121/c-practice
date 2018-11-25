// overloading
# include <iostream>
using namespace std;

void swap(int &a, int &b) {
	//a�Ox���Ѧ��ܼơA�Px�@�ΦP�@���O����Ŷ��A�����ۤ��P�����O�A�L�O�Ѧ��ܼƪ����O
	int temp;
	temp = a;
	a = b;
	b = temp;

	printf("Call by reference, a=%d and b=%d \n", a, b);

}

void swap(int *a, int *b) {
	//a�Ox���Ѧ��ܼơA�Px�@�ΦP�@���O����Ŷ��A�����ۤ��P�����O�A�L�O�Ѧ��ܼƪ����O
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