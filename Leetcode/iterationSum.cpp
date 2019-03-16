#include <iostream>

using namespace std;

int iterationSum(int N);
int iterationSum(int N, int result);

int main(){

  std::cout<<iterationSum(10)<<endl;

  return 0;
}

/* method 1
int iterationSum(int N){
  if(N==0){
    return 0;
  }
  return N+iterationSum(N-1);
} 
*/

/* method 2
int iterationSum(int N){
  return iterationSum(N,0);
}

int iterationSum(int N, int result){
  if(N==0){
    return result;
  }
  return iterationSum(N-1,result+N);
}
*/
int iterationSum(int N){
  int result = 0;
  for (int i=1;i<=N;i++){
    result = result + i;
  }
  return result;
}