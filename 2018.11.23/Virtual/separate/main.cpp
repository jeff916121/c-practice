# include <iostream>
using namespace std;

# include "classA.h"
# include "classB.h"

int main() {
	classA a1;
	a1.displayA1();
	a1.displayA2();
	classB b1;
	b1.displayA1();
	b1.displayA2();
	classA * b2;
	b2 = &a1;
	b2->displayA1();
	b2->displayA2();
	b2 = &b1;
	b2->displayA1();
	b2->displayA2();

	system("pause");
	return 0;
}