//Source.cpp
# include <iostream>

# include "Complex.h"

using namespace std;

int main() {

	printf("Welcome to the Complex world\n");

	
	char c1Name[3] = "c1";
	printf("Complex c1\n");
	Complex c1;
	printf("c1.setName(c1Name)\n");
	c1.setName(c1Name);
	printf("c1.display()\n");
	c1.display();
	printf("\n");
	
	char c2Name[3] = "c2";
	printf("Complex c2{3,5,c2Name}:\n");
	Complex c2{3,5,c2Name};
	printf("c2.display()\n");
	c2.display();
	printf("\n");

	char c3Name[3] = "c3";
	printf("Complex c3{7,-6,c3Name }\n");
	Complex c3{7,-6,c3Name };
	printf("c3.display()\n");
	c3.display();
	printf("\n");

	printf("Complex c4 = c2 + c3+ c2 + c3\n");
	char c4Name[3] = "c4";
	Complex c4 = c2 + c3+ c2 + c3;
	printf("c4.setName(c4Name)\n");
	c4.setName(c4Name);
	printf("c4.display()\n");
	c4.display();
	printf("\n");

	printf("c2=c3=c4\n");
	c2 = c3 = c4;
	printf("c2.display()\n");
	c2.display();
	printf("c3.display()\n");
	c3.display();
	printf("c4.display()\n");
	c4.display();
	printf("\n");

	printf("c4+=c3\n");
	c4 += c3 ;
	printf("c4.display()\n");
	c4.display();
	printf("c3.display()\n");
	c3.display();
	printf("\n");

	printf("Complex c5 = c3.add(c3, c4)\n");
	Complex c5 = c3.add(c3, c4);
	printf("c3.display()\n");
	c3.display();
	printf("c4.display()\n");
	c4.display();
	printf("c5.display()\n");
	c5.display();
	printf("\n");

	printf("Complex c6\n");
	Complex c6;
	printf("c6 = c3.add(c3, c4)\n");
	c6 = c3.add(c3, c4);
	printf("c3.display()\n");
	c3.display();
	printf("c4.display()\n");
	c4.display();
	printf("c6.display()\n");
	c6.display();
	printf("\n");

	system("pause");
	return 0;
}