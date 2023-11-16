#include<iostream>
using namespace std;

class base{
    private:
        int pri1=0;
    public:
        int pub1=0;
    protected:
        int pro1=0;
};


class deri1:public base{
    private:
        int pri2=0;
    public:
        int pub2=0;
    protected:
        int pro2=0;
};

class deri2:public deri1{
     private:
        int pri3=0;
    public:
        int pub3=0;
    protected:
        int pro3=0;
    public:
        void disp(){
            cout<<pri3<<endl;
            cout<<pub3<<endl;
            cout<<pro3<<endl;
            //cout<<pri2<<endl; is inaccessible
            cout<<pub2<<endl;
            cout<<pro2<<endl;
            // cout<<pri1<<endl; is inaccessible
            cout<<pub1<<endl;
            cout<<pro1<<endl;
        }
};

int main(){
    deri2 a;
    a.disp();
    

    //cout<<a.pri3<<endl; is not protected
    cout<<a.pub3<<endl;
    //cout<<a.pro3<<endl; is not protected
    //cout<<a.pri2<<endl; is inaccessible
    cout<<a.pub2<<endl;
    //cout<<a.pro2<<endl; is not protected
    // cout<<a.pri1<<endl; is inaccessible
    cout<<a.pub1<<endl;
    //cout<<a.pro1<<endl; is not protected
    return 0;
}