#include <iostream>
using namespace std;

#include <math.h>

void soloveHanoi(const int n, const char from, const char by, const char to, int* counter);

int main() {
  std::cout << "Hi, I'm going to display Hanoi Tower solution!\n";
  std::cout << "Please enter the plates' number!\n";
  int n ; 
  std::cin >> n ;

  int counter = 0;
  soloveHanoi(n,'a','b','c', &counter);
  std::cout << "Move " << counter << " times "<< std::endl;
  std::cout <<"According to the formula 2^n-1 is " << (pow(2,n)-1) << " times" << std::endl;
  //system("pause");
  return 0;
}



void soloveHanoi(const int n, const char from, const char by, const char to, int* counter){
  if(n==0){
    std::cout << "There's no plate to move"<<std::endl;
    return;
  }
  if(n==1){
    std::cout << n << "th plate move from " << from << " to "<< to << std::endl;
    (*counter)++;
    return;
  }
  soloveHanoi(n-1 , from, to, by, counter);
  std::cout << n << "th plate move from " << from << " to "<< to << std::endl;
  (*counter)++;
  soloveHanoi(n-1 , by, from, to, counter);
}