#include <iostream>

using namespace std;

bool binarySearch(const int* arrptr, const int comparedNumber, const int arraysize);
bool binarySearch(const int* arrptr, const int comparedNumber, const int left, const int right);

void findingFunction(const int* arrptr, const int findValue, const int arraysize);

int main(){

  //int arrptr[] = {1, 2};
  //int arrptr[] = {1, 2, 3};
  int arrptr[] = {1, 2, 3, 4, 5, 10, 15, 20, 30, 40, 50, 60, 70, 80};

  const int arraysize = *((&arrptr)+1)-arrptr; // because array's memory is continuous allocation
  std::cout<<"Your arraysize is "<<arraysize<<endl<<endl;

  std::cout<<"Your array is below"<<endl;
  for(int i=0;i<arraysize;i++){
    std::cout<<arrptr[i]<<" ";
  }
  std::cout<<endl<<endl;

  // test whether all elements can find
  int findTurns = 0;
  while(findTurns < arraysize){
    int findValue = arrptr[findTurns];
    findingFunction(arrptr, findValue, arraysize);
    findTurns++;
  }

  // test whether elements are not in array will be finded
  // findingFunction(arrptr, 100, arraysize);
  // findingFunction(arrptr, -10, arraysize);


  int number=0;
  do{
    std::cout<<"Enter number to check, -1 to break next test : ";
    std::cin>>number;
    findingFunction(arrptr, number, arraysize);
  }
  while(number!=-1);


  return 0;
}

void findingFunction(const int* arrptr, const int findValue, const int arraysize){
  std::cout<<"Ready to find "<<findValue<<endl;
  if(binarySearch(arrptr, findValue,arraysize)){
  std::cout<<"Find it"<<endl;
  }
  else{
    std::cout<<findValue<<" doesn't in array"<<endl;
  }
  std::cout<<endl;
}

bool binarySearch(const int* arrptr, const int comparedNumber, const int arraysize){
  return binarySearch(arrptr, comparedNumber, 0, 0+arraysize);
}

bool binarySearch(const int* arrptr, const int comparedNumber, const int left, const int right){
  
  // if I don't find it
  if(left>right){
    return false;
  }

  // if find using middle value
  int middlePoint = ( left + right ) / 2 ; // [2,3,4,5] (2+5)/2 => 3    2 | 4 5 

  if(arrptr[middlePoint] == comparedNumber){
    return true ;
  }
  if(arrptr[middlePoint] > comparedNumber){
    return binarySearch(arrptr, comparedNumber, left, middlePoint - 1);
  }
  if(arrptr[middlePoint] < comparedNumber){
    return binarySearch(arrptr, comparedNumber, middlePoint + 1, right);
  }
  return false;
}