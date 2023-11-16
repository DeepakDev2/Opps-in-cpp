#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    friend class Calculator;
    public:
        void set_data(int x,int y){
            a=x;
            b=y;
        }
};

class Calculator{
public:
    int sumReal(complex o1,complex o2){
        return o1.a+o2.a;
    }
    int sumImg(complex o1,complex o2){
        return o1.b+o2.b;
    }
};

int main(){
    complex o1,o2;
    o1.set_data(2,3);
    o2.set_data(5,7);

    Calculator a;
    cout<<a.sumReal(o1,o2)<<endl<<a.sumImg(o1,o2);
    
    return 0;
}