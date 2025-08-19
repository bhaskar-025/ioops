/*5.Write a C++ program to design a class Geometry that performs different area calculations
using function overloading. The program should overload a function named area() in three

different ways. In the first version, the function should accept the radius of a circle and return
its area. In the second version, it should accept the length and breadth of a rectangle and return
its area. In the third version, it should accept the base and height of a triangle and return its
area. Demonstrate all three overloaded methods in the main() function by calculating the area
of a circle, a rectangle, and a triangle*/

#include <iostream>
using namespace std;
#include <string>

class Geometry {
	public:
	float area(int radius){
		return 22/7*radius*radius;
	}
	float area(float l,float b){
		return l*b;
	}
	float area(int b,int h){
		return 0.5*b*h;
	}
};

int main(){
	 Geometry g1;
	 cout<<"area of the circle "<<g1.area(5)<<"\n";
	 
	 cout<<"area of the rectangle "<<g1.area(76.4f,54.2f)<<"\n";
	 cout<<"area of the triangle "<<g1.area(34,56)<<"\n";
}
