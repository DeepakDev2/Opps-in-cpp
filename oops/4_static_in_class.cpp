#include<iostream>
using namespace std;

class account{
    static int counter;//****************//{Default value is 0}//share by all value
    int id;
public:
    void set_id();

    static void get_count(){
        //cout<<id; will throw an error
        cout<<"The value of count is "<<counter<<endl;
    }
};

int account::counter;//***************//Initialize the value of counter here
void account::set_id(){
    cout<<"Enter the id of "<<counter+1<<endl;
    cin>>id;
    counter++;
}


int main(){
    account deepak;
    account ram;
    account shyam;


    deepak.set_id();
    account::get_count();

    ram.set_id();
    account::get_count();
    
    shyam.set_id();
    account::get_count();

    return 0;
}