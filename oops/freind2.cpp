#include<iostream>
using namespace std;

class complex;

class Calculator{
    public:
        int sumReal(complex ,complex );
};

class complex{
    int a;
    int b;
    friend int Calculator::sumReal(complex ,complex );
public:
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void get_data(){
        cout<<"The valus of a is "<<a<<"and the value of b is "<<b<<endl;
    }

};

int Calculator::sumReal(complex o1,complex o2){
            return (o1.a+o2.a);
}
 


int main(){
    complex h,g;
    h.set_data(2,3);
    g.set_data(100,2);

    Calculator calc;
    cout<<calc.sumReal(h,g);



    
    return 0;
}