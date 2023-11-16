#include<iostream>
using namespace std;


class numbers{
    int a;
    int b;
    public:
        numbers();
        numbers(int x,int y );

        void get_data(){
            cout<<"The value of a and b is "<<a<<" "<<b<<endl;
        }
};

numbers::numbers(){
    a=1;
    b=0;
}
numbers::numbers(int x,int y){
    a=x;
    b=y;
}
int main(){
    numbers x;
    numbers y(2,4);

    x.get_data();
    y.get_data();
    
    return 0;
}