# include <iostream>
#include <string>
using namespace std;
class employee{
	public:
	string name;
	int id;
	int salary;
	void display(){
		cout<<"enter your name\t";
		cin>>name;
		cout<<"\nenter your id\t";
		cin>>id;
		cout<<"\nenter your salary\t";
		cin>>salary;
		cout<<"your name is \t"<<name<<"\tand your id is\t"<<id<<"\tand your salary is\t"<<salary;
	}
};

int main(){
	employee em;
	em.display();
	return 0;
}
