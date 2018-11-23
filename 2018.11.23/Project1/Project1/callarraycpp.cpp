#include <iostream> 
#include <string.h>

using namespace std;

void callbyarray(char *, size_t );

int main() {


	char const * string_arraya [3] = {"one","two","three"} ;
	char string_a [5]= "test";
	
	callbyarray(string_a , strlen(string_a));
	system("pause");
	return 0;
}

void callbyarray(char *a, size_t size) {
	size_t count;

	*(a + 1) = 'h';

	for (count = 0; count < size; count++) {
		printf("%c", a[count]);
	}

}





