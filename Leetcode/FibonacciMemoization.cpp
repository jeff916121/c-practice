// FibonacciSeries

#include <iostream>

using namespace std;

static int* ptr;
static int counter=0;


int fibonacciSeries(int n) {

	if (*(ptr + n) == -1) {
		if (n <= 1) {
			*(ptr + n) = n;
			counter++;
			return *(ptr + n);
		}

		if (*(ptr + n - 2) == -1) {
			*(ptr + n - 2) = fibonacciSeries(n - 2);
		}
		if (*(ptr + n - 1) == -1) {
			*(ptr + n - 1) = fibonacciSeries(n - 1);
		}

		*(ptr + n) = *(ptr + n - 2) + *(ptr + n - 1);

		/*if ((*(ptr + n - 2) == -1) && (*(ptr + n - 1) != -1)) {
			*(ptr + n) = fibonacciSeries(n - 2) + *(ptr + n - 1);
		}
		else if ((*(ptr + n - 2) != -1) && (*(ptr + n - 1) == -1)) {
			*(ptr + n) = *(ptr + n - 2) + fibonacciSeries(n - 1);
		}
		else if ((*(ptr + n - 2) == -1) && (*(ptr + n - 1) == -1)) {
			*(ptr + n) = fibonacciSeries(n - 2) + fibonacciSeries(n - 1);
		}
		else {
			*(ptr + n) = *(ptr + n - 2) + *(ptr + n - 1);
		}*/
	}
	counter++;
	return *(ptr + n);
}

int main() {

	
	int n = 0;
	std::cout << "Enter n :";
	std::cin >> n ;


	ptr = new int[n+1];

	for (int i = 0; i <= n; i++) {
		*(ptr+i)=-1;
	}

	//std::cout << fibonacciSeries(n) << " ";

	/*for (int i = 0; i <= n; i++) {
		std::cout<< fibonacciSeries(i) << " " ;
	}*/

	for (int i = n; i >= 0; i--) {
		std::cout << fibonacciSeries(i) << " ";
	}

	std::cout << std::endl;

	for (int i = 0; i <= n; i++) {
		std::cout << *(ptr + i) << " " ;
	}

	std::cout << "Performs " << counter << " times" << std::endl;

	delete ptr;


	system("pause");
	return 0;
}