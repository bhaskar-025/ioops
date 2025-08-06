#include <iostream>
using namespace std;
#include<cstring>
 class StringPattern{
 	public:
 	char str[100];
 	
 	StringPattern(){
 		strcpy(str,"abc");
	 }
	 StringPattern(char* input){
	 	strcpy(str,input);
	 }
 	void printWavePattern(){
 		cout<<"\ncharacter in the even indices\t";
 		int i;
 		int len=strlen(str);
 		for(i=1;i<len;i+=2){
 			cout<<str[i];
		 }
		 	cout<<"\ncharacter in the odd indices\t";
 	
 		for(i=0;i<len;i+=2){
 			cout<<str[i];
		 }
	 }
 };
 int main(){
 	StringPattern w;
 	w.printWavePattern();
 	StringPattern s((char *)"helloBhaskar");
 	s.printWavePattern();
 }
