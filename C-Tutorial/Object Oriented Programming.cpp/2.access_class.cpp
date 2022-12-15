#include <iostream>
#include <vector>
#include <string>
using namespace std;

//declare classes and objects
class Player{
public://access modifier
    

    //attributes
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say){cout<<name<<"says"<<text_to_say<<endl;};
    bool is_dead();

}

class Account{
public:

    //attributes
    string name;
    double balance;

    //months
    bool deposit(double bal){balance+=bal;cout<<"in deposit"<<endl;}
    bool withdraw(double bal){balance-=bal;cout<<"in withdraw"<<endl;}

}


int main(){

    Account Frank_account;
    Frank_account.name ="Frank's Account";
    Frank_account.balance= 5000.0;

    Frank_account.deposit(1000.0);
    Frank_account.withdraw(500.0);



    Player Frank;
    Frank.name="Frank";
    Frank.health=100;
    Frank.xp=12;
    Frank.talk("Hi,be ye friend or foe?");

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health =100;
    (*enemy)->xp =15;

    enemy ->talk("I will destroy you!");





}