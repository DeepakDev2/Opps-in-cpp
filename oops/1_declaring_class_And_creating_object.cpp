#include<iostream>
#include <string>
#include<vector>
using namespace std;

class Player{
    // Attributes 
    string name{"Player_name"};
    int id{999};
    float xp{100};

    // Methods
    void talk(string);
    bool is_dead();
};

class Account{
    // attributes
    string name{"Account_name"};
    double balance{0};

    //Methods
    bool withdraw(double);
    bool draw(double);
};

int main(){

    Player best;
    Player master;

    Player list[]{best,master};

    vector <Player> list2{best};
    list2.push_back(master);

    


    Player *enemy{nullptr};
    enemy = new Player;
    return 0;
}