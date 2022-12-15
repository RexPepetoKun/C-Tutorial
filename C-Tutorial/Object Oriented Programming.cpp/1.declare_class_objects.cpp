#include <iostream>
#include <vector>
#include <string>
using namespace std;

//declare classes and objects
class Player{
    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string);
    bool is_dead();

}

class Account{
    //attributes
    string name;
    double balance;

    //months
    bool deposit(double);
    bool withdraw(double);

}


int main(){

    Account kaikun_account; //declare an account object
    Account pepetokun_account;


    Player kaikun;  //declare player object
    Player pepetokun;

    Player players[]{kaikun,pepetokun};

    vector <Player>player_vec{kaikun};
    player_vec.push_back(pepetokun);

    Player *enemy{nullptr};
    enemy = new Player;


    





}