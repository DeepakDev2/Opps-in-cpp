#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
        base1(int x){
            data1=x;
            cout<<"Base1 constructor is called"<<endl;
        }
        void get_base1(){
            cout<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int x){
            data2=x;
            cout<<"Base2 constructor is called"<<endl;
        }
        void get_base2(){
            cout<<data2<<endl;
        }
};

class deri:public base1,public base2{
    int data3,data4;
    public:
        deri(int a,int b,int c, int d):base1(a),base2(b){
            cout<<"Constructor of derrived class is called"<<endl;
            data3=c;
            data4=d;
        }

        void getdata3(){
            cout<<data3<<" "<<data4<<endl;
        }
};


int main(){
    deri obj(1,2,3,4);
    obj.get_base1();
    obj.get_base2();
    obj.getdata3();
    
    return 0;
}