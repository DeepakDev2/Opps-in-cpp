#include<iostream>
#include<string>
using namespace std;

class complex{
    int a;
    int b;

    friend complex sum(complex o1,complex o2);
    public:
        void set_data(int x,int y);
        void get_data();

};
void complex::set_data(int x,int y){
    a=x;
    b=y;
}
void complex::get_data(){
    cout<<"The value of a and b is "<<a<<" "<<b<<endl;
}

complex sum(complex o1,complex o2){
    complex o3;
    // o3.a=o1.a+o2.a;
    // o3.b=o1.b+o2.b;

    o3.set_data(o1.a+o2.a,o1.b+o2.b);
    return o3;
}

int main(){
    complex p;
    complex q;
    p.set_data(1,2);
    q.set_data(3,4);

    p.get_data();
    q.get_data();

    complex r=sum(p,q);
    r.get_data();
    

    
    return 0;
}