// call by reference
# include <iostream>
using namespace std;

void swap(int &a, int &b) {
	//a�Ox���Ѧ��ܼơA�Px�@�ΦP�@���O����Ŷ��A�����ۤ��P�����O�A�L�O�Ѧ��ܼƪ����O
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