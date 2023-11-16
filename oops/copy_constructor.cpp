#include<iostream>
using namespace std;


class num{
    int a;
    public:
        num(){
            a=0;
        }
        num(int x){
            a=x;
        }
        num(num &obj){
            cout<<"Copy constructor invoked.."<<endl;
            a= obj.a;
        }

        void show(){
            cout<<a<<endl;
        }

        void change(int x){
            
            a=x;
        }
};

int main(){
    num x,y,z(4);
    
    cout<<"***"<<endl;
    num p=z;
    p.show();
    cout<<"***"<<endl;
    y=z;
    y.show();
    cout<<"***"<<endl;
    num t(z);
    t.show();
    cout<<"***"<<endl;
    t.change(5);
    z.show();
    t.show();
    return 0;
}