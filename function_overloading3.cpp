#include <iostream>
using namespace std;
class calorie{
	public:
	
	
	void calories_calculate(int timeMinutes, float weightKg){
		float calories;
		calories = (3.5 * weightKg * timeMinutes) / 200;
		
		cout<<"total calories burn is equal to "<<calories<<"\n";
	}
	
		void calories_calculate(int timeMinutes, float speedKmh, float weightKg){
		float calories,met;
		if(speedKmh==8) met=8.3;
		if(speedKmh==10) met=10;
		if(speedKmh==12) met=11.5;
		
		calories = 0.0175 * met * weightKg * timeMinutes;
		
		cout<<"total calories burn is equal to "<<calories<<"\n";
	}
	
		void calories_calculate(float distanceKm, int timeMinutes, float terrainFactor, float weightKg){
		float calories,Base_speed,BaseCalories;
		Base_speed = distanceKm / (timeMinutes / 60);
		BaseCalories = 0.021 * weightKg * timeMinutes;
		calories = BaseCalories * terrainFactor;
		cout<<"total calories burn is equal to "<<calories<<"\n";
	}
	
};

int main(){
	calorie c1,c2,c3;
	c1.calories_calculate(15,70);
		c2.calories_calculate(15,10,70);
			c3.calories_calculate(100,15,4,70);
}
