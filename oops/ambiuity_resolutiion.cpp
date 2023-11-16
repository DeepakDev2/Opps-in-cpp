#include<iostream>
using namespace std;

class base1{
    public:
        int a;
        int b;
};

class base2{
    public:
        int a;
        int b;
};

class deri:public base1,public base2{
    public:
        int a;
        int b;
        void set_data(int x,int y,int c,int d,int e,int f){
            base1::a=x;
            base1::b=y;
            base2::a=c;
            base2::b=d;
            deri::a=e;
            deri::b=f;
        }

        void get_data(){
            cout<<base1::a<<" ";
            cout<<base1::b<<" ";
            cout<<base2::a<<" ";
            cout<<base2::b<<" ";
            cout<<deri::a<<" ";
            cout<<deri::b<<" "<<endl;
        }

};

int main(){
    deri o;
    o.set_data(1,2,3,4,5,6);
    o.get_data();
    
    return 0;
}