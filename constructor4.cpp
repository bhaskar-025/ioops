#include <iostream>
using namespace std;
class DigitalRootMatrix{
	public:
	int mat[50][50];
	int rows;
	int cols;
	DigitalRootMatrix(){
		rows=1;
		cols=1;
		mat[0][0]=1;
	}
	DigitalRootMatrix(int row, int col){
		rows=row;
		cols=col;
		int i,j,k,l;
		int n=1;
		for(i=0;i<row;i++){
			for(k=0;k<col;k++){
				mat[i][k]=n++;
			}
		}
		//to display the original matrix
		cout<<"our original matrix is \n";
		for(i=0;i<row;i++){
			for(k=0;k<col;k++){
				cout<<mat[i][k]<<"\t";
			}
			cout<<"\n";
		}
		int sum;
		//to get the digit root sum of all the number in the matrix
			for(i=0;i<row;i++){
			for(k=0;k<col;k++){
				int num=mat[i][k];
				
			
				 while (num > 9) {       
         sum = 0;
        while (num > 0) {   
            sum += num % 10;
            num /= 10;
        }
        num = sum;          
    }
    mat[i][k]=num;
		}
		}
		// to get the digit root matrix 
			cout<<"our digit root matrix is \n";
		for(i=0;i<row;i++){
			for(k=0;k<col;k++){
				cout<<mat[i][k]<<"\t";
			}
			cout<<"\n";
		}
		
		
		
	}
	int sumOfAll(){
		int sum=0;
		int i,k;
		for(i=0;i<rows;i++){
			for(k=0;k<cols;k++){
				sum+=mat[i][k];
			}
		}
		return sum;
	}
	};
	int main(){
		DigitalRootMatrix d(8,10);
			cout<<"sum of all the value in the given digit root matrix is \t"<<d.sumOfAll();
	}
