#include<iostream>
#include<string>
#include<vector>
using namespace std;

class students{
public:
    string name;
    int id;
    int attendence;

    void greet(string a){
        cout<<"hello "<<name<<" .You just typed: "<<a<<endl;
    }
    int attc(int a){
        attendence+=a;
        return attendence;
        
    }
};

int main(){
    
    students deepak;
    deepak.name="Deepak kumar";
    deepak.id=20231021;
    deepak.attendence=3;

    deepak.greet("Sometime I feels that I am devil");
    cout<<"your intial attendence is "<<deepak.attendence<<endl;
    cout<<"Your this attendence right now is "<<deepak.attc(7)<<endl;

    students *good{nullptr};
    good = new students;

    (*good).name = "Dev";
    good->id=20231212;
    cout<<(*good).name<<endl;
    cout<<good->id<<endl;
    good->greet("Sometime I feels that I am god");
    delete good;
    
    

    
    
    return 0;
}