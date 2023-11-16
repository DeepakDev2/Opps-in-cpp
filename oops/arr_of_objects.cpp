#include<iostream>
#include<string>
using namespace std;


class employee{
    static int counter;
    int id;
    int salary;
public:
    void set_id();
    void get_id();
};

int employee::counter;

void employee::set_id(){
        cout<<"Enter the id of employee " <<++counter<<":";
        cin>>id;
}
void employee:: get_id(){
    cout<<"The id of this member is "<<id<<endl;
}

int main(){
    employee name[10];

    for(int i=0;i<10;i++){
        name[i].set_id();
        name[i].get_id();
    }


    //****************CREATING A POINTER FOR DYNAMIC MEMORY ALLOCATION****************


    // employee *name{nullptr};
    // name =new employee;

    // for(int i=0;i<10;i++){
    //     name[i].set_id();
    //     name[i].get_id();
    // }
    // delete name;
    
    
    return 0;
}