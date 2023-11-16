#include<iostream>
#include<string>
using namespace std;
class Player{
    private:
    string name;
    int id;

    public:
    bool is_dead(int xp){
        return !xp;
    }
    int hp(int a);
};
int main(){
    Player legends;
    cout<<legends.is_dead(20)<<endl;
    cout<<"Your hp right now is "<<legends.hp(20);
    
    return 0;
}

int Player::hp(int a){
    return a+20;
}