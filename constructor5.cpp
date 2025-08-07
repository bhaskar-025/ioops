#include <iostream>
using namespace std;
 
 class SpiralPrimeMatrix{
 	public:
 		
 		int mat[50][50];
 		int size;
 		
 		SpiralPrimeMatrix(){
 			size=1;
 			mat[0][0]=2;		 
 		}
 		SpiralPrimeMatrix(int n){
 			size=n;
			 int top;
			 top=0;
			 int left; 
			 left=0;
			 int bottom;
			 bottom=n-1;
			 int right;
			 right=n-1;
             int p;
			 p=1;
			 int i,j,k,l;
			 	
			 
			 while(top<=bottom && left<=right){
			 	
			 	for(i=left;i<=right;i++){
			 		p=aglaprime(p);
			 		mat[top][i]=p;
				 }
				 top++;
				 
				 for(i=top;i<=bottom;i++){
				 	p=aglaprime(p);
				 	mat[i][right]=p;
				 }
				 right--;
				 
				 for(i=right;i>=left;i--){
				 	p=aglaprime(p);
				 	mat[bottom][i]=p;
				 }
				 bottom--;
				 
				 for(i=bottom;i>=top;i--){
				 	p=aglaprime(p);
				 	mat[i][left]=p;
				 }
				 left++;
			 }	 	
		 }
		 
		 int aglaprime(int n){
		 	int i,j,count;
		 	for(i=n+1;i<1000;i++){
		 		count=0;
		 		for(j=2;j<=i-1;j++){
		 			if(i%j==0){
		 				count++;
					 }
				 }
				 if(count==0){
				   return i;
				 }
			 }
			 return 0;
		 }
		 
		  void display(){
		  	int i,j;
		  	for(i=0;i<size;i++){
		  		for(j=0;j<size;j++){
		  			cout<<mat[i][j]<<"\t";
				  }
				  cout<<"\n";
			  }
		  }
		  
		int diagonalSum() {
				int i;
    	 int sum = 0;
        for (i = 0; i < size; i++) {
            sum += mat[i][i];
            sum += mat[i][size - 1 - i];
        }
        
        if (size % 2 != 0) {
            sum -= mat[size / 2][size / 2];
        }
        
        return sum;
		}
		
		~SpiralPrimeMatrix(){
			cout<<"\ndestructor called\n";
		} 
 };
 
 int main(){
 	SpiralPrimeMatrix  s1;
 	s1.display();
 	cout<<"\nsum of all the diagonal element is "<<s1.diagonalSum()<<"\n";
 	
 	SpiralPrimeMatrix s2(7);

 	s2.display();
 	cout<<"\nsum of all the diagonal element is "<<s2.diagonalSum();
 }
