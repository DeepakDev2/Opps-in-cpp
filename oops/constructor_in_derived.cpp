#include<iostream>
using namespace std;

class base{
    public:
        int a;
        base(){}
        base(int x){
            a=x;
        }
};

class deri: public base{
    int b;
    public:
        deri(int x,int y):base(y){
            b=x;
        }
        void get_data(){
            cout<<a<<" "<<b<<endl;
        }
};

int main(){
    deri obj(1,2);
    obj.get_data();
    
    return 0;
}