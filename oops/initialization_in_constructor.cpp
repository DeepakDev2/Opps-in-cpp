#include<iostream>
using namespace std;

class base{
    int a;
    int b;
    public:
        base(int x,int y):a(x),b(y*a)
//a will intitialize first as a is written first during member creation-->b(j),a(2*b) will give garbage value
        {
            cout<<a<<" "<<b<<endl;
        }
};
int main(){
    base obj(8,2);
    return 0;
}