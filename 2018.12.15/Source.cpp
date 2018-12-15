#include <iostream>

#include <fstream>

using namespace std;

void read_data( ifstream &read_file, float &height, float &weight) {
	read_file >> height;
	read_file >> weight;
}

float compute_BMI(const float &height, const  float &weight) {
	
	float BMI = weight / (height * height);
	if (BMI > 50 || BMI < 10) {
		return -1;
	}
	return BMI;
}

void output_data(ofstream  &write_file, const float &BMI) {
	write_file << BMI;

}

int main() {

	
	float height, weight = 0;
	float BMI = 0;

	ifstream read_file;
	read_file.open("infile.txt");

	read_data( read_file , height, weight);

	read_file.close();
	
	ofstream write_file;
	write_file.open("outfile.txt");

	BMI = compute_BMI(height, weight);
	if (BMI == -1) {
		std:: cout << "Impossible!";
	}
	else {
		output_data(write_file, BMI);
	}

	write_file.close();
	
	system("pause");

	return 0;
}
