#include <iostream>
using namespace std;
class emi {
    public:
    float p;
    int r;
    int m;

    void loan_calculate(double amount,float rate , int tenure){
        p=amount;
        r=rate;
        m=tenure;
        cal_loan();
    }
     void loan_calculate(double amount,int tenure){
        p=amount;
        r=7.5;
        m=tenure;
        cal_loan();
    }
    void loan_calculate(double amount, float rate,int tenure, double pfee){
        p=amount+pfee;
        r=rate;
        m=tenure*12;
        cal_loan();
    }
    void cal_loan(){
        int em;
        em= (p*r* n_th_power(1+r,m))/n_th_power(1+r,m)-1;

        cout<<"total emi is "<<em<<"\n";
    }

    int n_th_power(int a, int b){
        int i;
        int result=1;
        for(i=1;i<=b;i++){
            result=result*a;
        }
        return result;
    }
};
int main(){
    emi e1,e2,e3;
    e1.loan_calculate(10000,12,6);
     e1.loan_calculate(10000,6);
      e1.loan_calculate(10000,12,6,300);
}
