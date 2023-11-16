#include<iostream>
#include<string>
using namespace std;

class account{
    private:
    string id;
    int balance;

    public:
    int set_bal(int amount){
        balance=amount;
    }
    int deposite(int a);

    void get_bal();

};//deepak object can also be created here;

int main(){
    account deepak;//here deepak is an object
    // cout<<deepak.balance;   cannot be accessed directly because it is private..need to pass through a function defined in the class to get access...
    deepak.set_bal(100);
    deepak.get_bal();
    deepak.deposite(1000);
    deepak.get_bal();
    
    return 0;
}
int account::deposite(int a){
    balance+=a;
}
void account::get_bal(){
    cout<<"Your current balance is "<<balance<<endl;
}