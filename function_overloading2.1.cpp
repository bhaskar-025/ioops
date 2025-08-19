#include <iostream>
using namespace std;
#include <string>
class BankAccount {
    public:
    string account_number;
    int balance;

    BankAccount(string acc_no){
        account_number=acc_no;
        balance=0;
    }
    void deposite(int trans_amt){
        balance +=trans_amt;
        cout<<"your transaction ammount is "<<trans_amt<<" and tota amount is "<<balance<<"\n";
    }
    void deposite(int trans_amt,string description){
         balance +=trans_amt;
        cout<<"your transaction ammount is "<<trans_amt<<"that is "<<description<<" and tota amount is "<<balance<<"\n";
        
    }
    void deposite(float amt_in_dollar, int con_factor){
         balance= balance + amt_in_dollar * con_factor;
         cout<<"your transaction ammount is "<< amt_in_dollar * con_factor<<" and tota amount is "<<balance<<"\n";
    }

     void withdrawal(int trans_amt){
        balance -=trans_amt;
        cout<<"your withdrawal ammount is "<<trans_amt<<" and tota amount is "<<balance<<"\n";
    }
    void withdrawal(int trans_amt,string description){
         balance -=trans_amt;
        cout<<"your withdrawal ammount is "<<trans_amt<<"that is "<<description<<" and tota amount is "<<balance<<"\n";
        
    }
    void withdrawal(float amt_in_dollar, int con_factor){
         balance= balance - amt_in_dollar * con_factor;
         cout<<"your withdrawal ammount is "<< amt_in_dollar * con_factor<<" and tota amount is "<<balance<<"\n";
    }
};

int main(){
    BankAccount b1("215712518109");
    
    b1.deposite(2345);
    b1.deposite(1000, "Bonus");
    b1.deposite(100.0f,83);  

    b1.withdrawal(500);
    b1.withdrawal(300, "Groceries");
    b1.withdrawal(50.0f,56);

}
