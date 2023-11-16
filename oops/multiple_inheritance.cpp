#include<iostream>
using namespace std;

class base1{
    public:
        int a;
        void set_data1(int x){
            a=x;
        }
        void get_data1(){
            cout<<a<<endl;
        }
};

class base2{
    public:
        int b;
        void set_data2(int x){
            b=x;
        }
        void get_data2(){
            cout<<b<<endl;
        }
};

class deri: public base1,public base2{
    int c;
    public:
        void set_data3(int x){
            c=x;
        }
        void get_data3(){
            cout<<c<<endl;
        }
};

int main(){
    deri p;
    p.set_data1(1);
    p.set_data2(2);
    p.set_data3(3);

    p.get_data1();
    p.get_data2();
    p.get_data3();
    
    return 0;
}