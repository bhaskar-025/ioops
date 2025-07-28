#include <iostream>
#include <string>
using namespace std;

class book{
	public:
	string title ,author;
	int price;
	void display(){
		cout<<"\ntitle is\t"<<title<<"\tauthor name is\t"<<author<<"\tprice is\t"<<price;
	}
};
int main(){
	book bk[3]={
		{"love is life","bhaskar",1000
		},
		{"anger is useless","bhaskar",1300
		},
		{"be grateful","bhaskar",1400
		}
	};
	int i;
	for(i=0;i<3;i++){
		bk[i].display();
	}
	return 0;
}
