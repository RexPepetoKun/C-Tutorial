#include <iostream>
#include <string>

using namespace std;

class Player{
    private:    //private access modifier;
    //attribute
    string name;
    int health;
    int xp;

    public: //public access modifier;
    //methods
    void talk(string text_to_say){cout<<name<<"says"<<text_to_say<<endl;};
    bool is_dead();


}


int main(){

    Player Emperor;
    // Emperor.name = "Caesar"; //uncomment these private attributes; error will occur because cannot access
    // Emperor.health="100";
    Emperor.talk("Behold, the Imperator of the known world");//ok because public 

}