#include <iostream>
using namespace std;

class shoopingbill{
    public:
    float bill;

    void claculateBill(float price,int quantity){
        bill=price*quantity;
        cout<<"the total bill for your "<<quantity<<" product is "<< bill<<"\n";
    }
     void claculateBill(float price1,int quantity1,float price2,int quantity2){
        bill=(price1*quantity1)+(price2*quantity2);
       cout<<"the total bill for your "<<quantity1+quantity2<<" product is "<< bill<<"\n";
    }
      void claculateBill(float price,int quantity,float dscount){
        bill=(price*quantity);
        bill=bill-((dscount)*bill)/100;
        cout<<"the total bill for your "<<quantity<<" product after the discount is "<< bill<<"\n";
    }
};

int main(){
    shoopingbill s1,s2,s3;
    s1.claculateBill(123.4,6);
    s2.claculateBill(123.4,6,87.8,4);
    s1.claculateBill(129.4,6,25);

}
