#include <iostream>
using namespace std;

class travel_cost{
public:
	
	void total_cost( float dist, float effieciency , float price){
		float cost;
		cost=dist *price/effieciency;
		cout<<"total cost of the travel is "<<cost<<"\n";
	}
	void total_cost( float dist, float price){
		float cost;
		cost=dist*price;
		cout<<"total cost of the travel is "<<cost<<"\n";
	}
	void total_cost( float dist, float price,int class_type){
		float cost;
		cost=dist*price;
		if(class_type==2){
			cost=cost+0.4*cost;
		}
		cout<<"total cost of the travel is "<<cost<<"\n";
	}
};

int main(){
	travel_cost c1,c2,c3;
	
	int mode;
	
	cout<<"enter 1 for car \n enter 2 for flight\nenter 3 for train travel\n";
	cin>>mode;
	if(mode==1){
		float dist;
		float effieciency;
		float price;
		cout<<"enter the distance in km ";
		cin>>dist;
			cout<<"enter the efficiency of the fuel in km/l ";
		cin>>effieciency;
			cout<<"enter the price of one litre fluel";
		cin>>price;
		c1.total_cost(dist, effieciency ,price);
	}
	
		else if(mode==2){
		float dist;
		float price;
		cout<<"enter the distance in km ";
		cin>>dist;
			cout<<"enter the ticket price per km";
		cin>>price;
		c2.total_cost(dist,price);
	}
		else if(mode==3){
		float dist;
		int classtype;
		float price;
		cout<<"enter the distance in km ";
		cin>>dist;
			cout<<"enter the class 1 for sleeper 2 for AC  ";
		cin>>classtype;
			cout<<"enter the price of one litre fluel";
		cin>>price;
		c1.total_cost(dist,price,classtype);
	}
	else {
		cout<<"invalid choice";
	}
	return 0;
}
