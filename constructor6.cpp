#include <iostream>
using namespace std;
class NumberFrequencyAnalyzer{
	public:
		int range[50];
		int count[10];
		NumberFrequencyAnalyzer(){
			int i;
			for(i=1;i<=9;i++){
				range[i-1]=i;
			}
		}
		NumberFrequencyAnalyzer(int start , int end){
		
			int i;
			for(i=0;i<10;i++)count[i]=0;
			int k=0;
			for(i=start;i<=end;i++){
				range[k++]=i;
			}
			for(i=0;i<end-start+1;i++){
				int num;
				num=range[i];
				while(num>0){
					int c;
					c=num%10;
			count[c]++;
					num=num/10;
				}
			}
			
				for(i=0;i<10;i++){
					cout<<"digit\t"<<i<<"\tcomes\t"<<count[i]<<"\ttimes\n";
				}
			
			
		}
		
		int mostFrequentDigit(){
			int p=0;
		    int i;
		    for(i=1;i<10;i++){
		    if(count[p]<count[i]){
		    	p=i;
			}
			}
			return p;
		}
	
};
int main(){
	NumberFrequencyAnalyzer n(36,45);
	cout<<"\n\nmost frequent digit is\t"<<n.mostFrequentDigit();
}
