//Source.cpp

# include "Complex.h"

int main() {
	
	char * name = new char[100];
	std::cout << "Enter anything" << std::endl;
	scanf_s("%s", name,100);
	printf("%s\n", name);

	delete[] name;

	char c1Name[3] = "c1";
	char c2Name[3] = "c2";
		
	{
		Complex c1{1,2,c1Name};
		Complex c2{-3,4,c2Name };
		Complex c3{};
		c3.add(c1, c2);
		c3.display();

		Complex c7;
		c7 = Complex{ 1,2,c1Name };

		c7.display();
		std::cout << c7 <<std::endl;

		Complex c8;

		std::cout << "Decide name of c7 and c8 " << std::endl;
		std::cin >> c7 >> c8 ;
		std::cout << c7 << std::endl << c8 << std::endl;

	}

	//system("pause");
	return 0;
}