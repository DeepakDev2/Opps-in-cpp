#include<iostream>
using namespace std;

class employee{
    public:
        int id;
        int salary;
        employee(){}
        employee(int x){
            id=x;
            salary=34;
        }
};

class programmer: private employee{
    public:
        string lan="cpp";
        programmer(int x){
            id=x;
        }
};

int main(){

    employee deepak(1);
    cout<<deepak.id<<endl<<deepak.salary<<endl;

    programmer dee(3);
    
    
    return 0;
}