/*Write a C++ program to design a class Ride with attributes such as distance, time, and baseFare.
The program should overload the calculateFare() function in three different ways. The first
version should calculate the fare using only the distance. The second version should calculate
the fare using both distance and time. The third version should calculate the fare using the ride
type, such as "Luxury" or "Pool", and the distance, applying different multipliers depending on
the ride type. Demonstrate all three overloaded methods for different ride scenarios in the
main() function.*/

#include <iostream>
using namespace std;
#include<string>

class Ride {
	public:
		float distance;
		int time;
		int basefare;
		//initial value
		Ride(){
			distance=0;
			time=0;
			basefare=12;
		}
		 void calculateFare(float dist){
		 	float fare;
		 	distance=dist;
		    fare=dist*basefare;
		 	cout<<"total fare is "<<fare<<"\n";
		 }
		 
		 void calculateFare(float dist,int tme){
		 	distance=dist;
		 	time=tme;
		 	float fare;
		 	fare=dist*basefare +time;
		 	cout<<"total fare is "<<fare<<"\n";
		 }
		 	 void calculateFare(string ride_type , float dist){
		 	distance=dist;
		 	string type;
		 	float fare;
		 	type=ride_type;
			
		 if(type=="luxury"){
		 	fare;fare=dist*basefare*5;
	    		cout<<"total fare is "<<fare<<"\n";
		 }
		 else if(type=="pool"){
		 		fare=dist*basefare*2;
		    		cout<<"total fare is "<<fare<<"\n";
		 }
		 else {
		 	cout<<"invalid type of ride"<<"\n";
		 }	
		 }
};

int main(){
	Ride r1;
	r1.calculateFare(13.9);
	r1.calculateFare(19.4,30);
	r1.calculateFare("luxury",23.4);
}
