/*Write a C++ program to design a class Calculator that performs different types of
mathematical operations using function overloading. The program should overload a function
named compute() in three different ways. In the first version, the function should accept two
integers and return their sum. In the second version, it should accept two floating-point
numbers and return their product. In the third version, it should accept a base and an exponent
and return the result of raising the base to the given power. Demonstrate all three overloaded
methods in the main() function by performing different types of calculations.*/

#include <iostream>
using namespace std;
#include <string>

class calculator{
	public:
     int compute(int a , int b){
     	return a+b;
	 }
	 float compute(float a ,float b){
	 	return a*b;
	 }
	 float compute(float base,int exp){
	 	int i;
	 	float result=1;
	 	for(i=1;i<=exp;i++){
	 		result=result*base;
		 }
		 return result;
	 }
};

int main(){
	calculator c1;
	cout<<"sum of two number is "<<c1.compute(12,45)<<"\n";
	cout<<"product of two number is "<<c1.compute(12.4f,45.6f)<<"\n";
	cout<<"exponent is "<<c1.compute(9.5f,2)<<"\n";
}
