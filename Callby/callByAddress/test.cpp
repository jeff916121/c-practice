// call by pointer(address)
# include <iostream>
using namespace std;

void swap(int *a, int *b) {
	// a��b�O�����ܼơAdereference��O����ܼƩξ�ư}�C
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
	//�o��n�O�o�Ǧ�}�i�h

	printf("After swapping, x=%d and y=%d \n", x, y);

	system("pause");
	return 0;
}