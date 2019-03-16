#include <iostream>

int Fibonacci(int n,int turns,int r1,int r2){
	 if(turns == n){
		return r1;
	}
	 return Fibonacci(n,turns+1, r2, r1+r2);
}

int Fibonacci(int n){
	 int turns=0;
	 return Fibonacci(n,0,0,1);
}

 

int main() {
	 std::cout << "Hello World!\n";

	for (int i=0;i<=10;i++){
	  std::cout<<Fibonacci(i)<<" ";
	}

}