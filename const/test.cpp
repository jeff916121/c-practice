// const reference value
# include <iostream>
using namespace std;


int main() {

	int x = 5;
	const int &y = x;

	// y = 7;  
	// printf("Revised by y, x=%d\n",x);

	x = 8;

	printf("Revised by x, x=%d\n", x);
	printf("Revised by x, y=%d\n", y);

	system("pause");
	return 0;
}