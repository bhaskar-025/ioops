#include <iostream>
using namespace std;
class pascleTriangle{
	public:
		int pas[50][50];
		int rows;
	pascleTriangle(){
		rows=1;
		pas[0][0]=1;
	}
	pascleTriangle(int row){
		rows=row;
		int i,j,k,l;
		for(i=0;i<row;i++){
			for(j=0;j<=i;j++){
				//we know ncr is the pascle value
				//ncr=n!/r!*(n-r)!
				pas[i][j]= fact(i)/(fact(j)*fact(i-j));
				
			}
					}
	}
	 void display_pascle(){
	 	int i,j,k;
	 for(i=0;i<rows;i++){
	 	for(j=0;j<rows-i-1;j++){
	 		cout<<" ";
		 }
		 for(k=0;k<=i;k++){
		 	cout<<pas[i][k]<<" ";
		 }
		 cout<<"\n";
	 }
	 }
	int fact(int n){
		int i;
		int result=1;
		for(i=n;i>0;i--){
			result=result*i;
		}
		return result;
	}
	
	int sumOfRow(int k){
		int i;
		 int sum=0;
		for(i=0;i<k;i++){
			sum+=pas[k-1][i];
		}
		return sum;
	}	
	~pascleTriangle(){
		cout<<"\ndestructor called";
	}	
};
int main(){
	pascleTriangle p(7);
	p.display_pascle();
	cout<<"\nsum of 4 th row is "<<p.sumOfRow(4);
	return 0;
}
