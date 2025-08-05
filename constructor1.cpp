#include <iostream>
using namespace std;

class matrix{
	public:
		int row;
		int col;
		int mat[50][50];
	matrix(){
		row=1;
		col=1;
	
		 mat [0][0]=2;
	}
	matrix (int rows , int cols){
		row=rows;
		col=cols;
	
		int i;
		int m;
		int n;
		int p=1;
		for(n=0;n<rows;n++){
		   for(m=0;m<cols;m++){
				
		for(i=p+1;i<=100;i++){
			
			p=i;
			int r;
			int count=0;
			for(r=2;r<p;r++){
				if(p%r==0){
				count++;
				
				}
			}
			if (count==0){
//				cout<<"number is prime";
				mat[n][m]=p;
					break;
				}
			}
		}
	}
	for(n=0;n<rows;n++){
		   for(m=0;m<cols;m++){
		   	cout<<mat[n][m]<<"\t";
		   }
		   cout<<"\n";
	
}
}
    int sumDiagonalPrimes(){
    	int i;
    	 int sum = 0;
        for (i = 0; i < row && i < col; i++) {
            sum += mat[i][i];
            sum += mat[i][col - 1 - i];
        }
        
        if (row == col && row % 2 != 0) {
            sum -= mat[row / 2][col / 2];
        }
        cout<<"\nsum of all the diagonal element is "<<sum;
    
	}
	
	~matrix(){
		cout<<"\ndestructor called";
	}	 	
};

int main(){
	matrix m(5,5);
	m.sumDiagonalPrimes();
	return 0;
}
