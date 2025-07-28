# include <iostream>
#include <string>
using namespace std;
class student{
	public:
	
	int total(int a,int b ,int c){
		return a+b+c;
	}
	int avg(int a,int b ,int c){
		return (a+b+c)/3;
	}
};
int main(){
	int math;
	cout<<"\nenter the marks of math\t";
	cin>>math;
	int physics;
	cout<<"\nenter the marks of physics\t";
	cin>>physics;
	int chemistry;
	cout<<"\nenter the marks of chemistry\t";
	cin>>chemistry;
	student stn;
	cout<<"\nyour total marks is \t"<<stn.total(math,physics,chemistry);
	cout<<"\nyour average marks is \t"<<stn.avg(math,physics,chemistry);
	return 0;
	
}
