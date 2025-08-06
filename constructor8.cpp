#include <iostream>
using namespace std;
class timeDuration{
	public:
	int hours;
	int minutes;
	int seconds;
	timeDuration(){
		hours=00;
		minutes=00;
		seconds=00;
		cout<<hours<<":"<<minutes<<":"<<seconds;
	}
	timeDuration(int hrs, int mnts ,int secs){
	    
	    	while(secs>60){
	    		secs=secs-60;
	    		mnts++;
			}
			seconds=secs;
				while(mnts>60){
	    		mnts=mnts-60;
	    		hrs++;
			}
			minutes=mnts;
			hours=hrs;	
	}
	int totalSeconds(){
		int total;
		total=(3600*hours)+(60*minutes)+seconds;
		return total;
	}
	void print(){
			cout<<hours<<":"<<minutes<<":"<<seconds;
	}
	~timeDuration(){
		cout<<"\ndestructor called";
	}
};
int main(){
	timeDuration t(10,241,181);
	cout<<"total second is "<<t.totalSeconds()<<"\n";
	t.print();
}
