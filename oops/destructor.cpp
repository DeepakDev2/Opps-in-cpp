#include<iostream>
using namespace std;

int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"Constructor is called for object "<<count<<endl;
        }

        ~num(){
            cout<<"Distructor is called for oject"<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"Entered in main function!"<<endl;
    num n1;
    cout<<"An object n1 is created"<<endl;
    {
        cout<<"Entered in a scope and two more objects n2 and n3 is created."<<endl;
        num n2,n3;
        cout<<"Exiting the scope"<<endl;
    }
    cout<<"Exiting the main function"<<endl;

    

    return 0;
}