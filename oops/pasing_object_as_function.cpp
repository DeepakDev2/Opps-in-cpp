#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public:
        void set_data(int x,int y);
        void get_data();
        void sum(complex x,complex y){
            a=x.a+y.a;
            b=x.b+y.b;
        }
};

void complex::set_data(int x,int y){
    a=x;
    b=y;
}
void complex::get_data(){
    cout<<"Real part is "<<a<<endl;
    cout<<"Img part is "<<b<<endl;
}

int main(){
    complex num1;
    complex num2;
    num1.set_data(2,3);
    num2.set_data(4,5);
    complex num3;

    num3.sum(num1,num2);
    num3.get_data();
    
    return 0;
}