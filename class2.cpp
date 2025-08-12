# include <iostream>
#include <string>
using namespace std;
class calculator{
	public:
	
	int add(int a , int b){
		return a+b;
	}
		int substract(int a , int b){
		return a-b;
	}
		int multiply(int a , int b){
		return a*b;
	}
		int divide(int a , int b){
		return a/b;
	}
};

int main(){
	int a;
	cout<<"enter the first number";
	cin>>a;
	int b;
	cout<<"enter the second number";
	cin>>b;
	calculator cal;
	cout<<"\naddition is\t"<<cal.add(a,b);
	cout<<"\nsubstraction is\t"<<cal.substract(a,b);
	cout<<"\nmultiplication is\t"<<cal.multiply(a,b);
	cout<<"\nyour division is\t"<<cal.divide(a,b);
	return 0;
}
