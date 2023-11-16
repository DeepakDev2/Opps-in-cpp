#include<iostream>
using namespace std;

class student{
    protected:
        int roll;
    public:
        void set_roll(int x){
            roll=x;
        }
};

class marks: virtual public student{
    protected:
        int maths;
    public:
        void set_maths(int x){
            maths=x;
        }
};
class sports: virtual public student{
    protected:
        int sportsM;
    public:
        void set_sportsM(int x){
            sportsM=x;
        }
};

class result: public marks,public sports{
    protected:
        int total;
    public:
        void set_total(){
            total=sportsM+maths;
        }
        void get_total(){
            cout<<"The marks of "<<roll<<" is "<<total<<endl;
        }
        
};

int main(){
    class result deepak;
    deepak.set_roll(1021);
    deepak.set_maths(100);
    deepak.set_sportsM(99);
    deepak.set_total();
    deepak.get_total();
    
    return 0;
}