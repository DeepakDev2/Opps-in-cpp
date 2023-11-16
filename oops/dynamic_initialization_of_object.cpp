#include<iostream>
using namespace std;

class num{
    int a;
    int b;
    public:
        num(){}
        num(int,int);
        void show(){
            cout<<a<<" "<<b<<endl;
        }
};
num::num(int x,int y){
    a=x;
    b=y;
}

int main(){
    num n;
    n.show();
    n=num(2,3);
    n.show();
    
    return 0;
}