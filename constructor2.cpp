#include <iostream>
using namespace std;

class FibonacciGrid{
	public:
	int rows;
	int cols;
	int mat[50][50];
	
	FibonacciGrid(){
		rows=1;
		cols=1;
		mat[0][0]=0;
	}
	FibonacciGrid(int row , int col){
		rows=row;
		cols=col;
		int i,j,k,l;
		int temp_array[row*col];
		temp_array[0]=0;
		temp_array[1]=1;
		//to store fabonacii no in the temporary array
		for(k=2;k<row*col;k++){
			temp_array[k]=temp_array[k-1]+temp_array[k-2];
		}
		// to store all fabonacci no in the our matrix
		k=0;
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				mat[i][j]=temp_array[k++];
			}
		}
		// to display the matrix
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cout<<mat[i][j]<<"\t";
			}
			cout<<"\n";
		}
	}
	int sumBorderElements(){
		int sum=0;
		int y;
		for(y=0;y<cols;y++){
			sum+=mat[0][y];
		}
		for(y=1;y<rows;y++){
			sum+=mat[y][0];
		}
		for(y=1;y<rows;y++){
			sum+=mat[y][cols-1];
		}
		for(y=1;y<cols-1;y++){
			sum+=mat[rows-1][y];
		}
		return sum;
	}
	};
int main(){
	FibonacciGrid f(3,4);
	cout<<"sum of the outer edge  of the matrix is "<<f.sumBorderElements();
}
