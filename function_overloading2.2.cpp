#include <iostream>
#include <string>
using namespace std;

class product {
	public:
	string name;
	int price;
		product (string name, int price){
			this->name=name;
			this->price=price;
		}
	 void applyDiscount(float percent){
		price=price-(price*percent/100);
		cout<<"the price of your "<<name<<"is "<<price<<"\n";
	}
	void applyDiscount(){
		int discount;
			discount=15;
		price=price-(price*discount/100);
			cout<<"the price of your "<<name<<"is "<<price<<"\n";
	}
	
	void applyDiscount(int coupon_code){
		int c=coupon_code;
		switch(c){
			case 1001: {
				price=price-(price*30/100);
					cout<<"the price of your "<<name<<"is "<<price<<"\n";
	
				break;
			}
			
			case 1002: {
				price=price-(price*40/100);
					cout<<"the price of your "<<name<<"is "<<price<<"\n";
	
				break;
			}
			case 1003: {
				price=price-(price*50/100);
					cout<<"the price of your "<<name<<"is "<<price<<"\n";
	
				break;
			}
			case 1004: {
				price=price-(price*60/100);
					cout<<"the price of your "<<name<<"is "<<price<<"\n";
	
				break;
			}
			default :{
				cout<<"invalid coupon so no special discount "<<"\n";
				cout<<"the price of your "<<name<<"is origial"<<price<<"\n";
	
				break;
			}
		}
	}
};

int main(){
	product p("perfume",1000);
	p.applyDiscount();
	p.applyDiscount(10.12f);
	p.applyDiscount(1003);
}
