#include <iostream>
using namespace std;

int age;
bool has_car;

void can_you_drive(int age, bool has_car) {

    if (age >=16){

        if (has_car==true){
            cout<<"Yes-you can drive"<<endl;
        }
        else {
            cout<<"Sorry, buy a car first."<<endl;
        }
    }
    else {
        cout<<"Sorry, come back after "<<(16-age)<<" years."<<endl;
    }
}

int main(){

    cout<<"What's your age?"<<endl;
    cin>>age;
    cout<<"Do you have a car?"<<endl;
    cin>>boolalpha>>has_car;  
    //boolaplha needed to allow user to input true/false.otherwise input only accepts 1 or 0.

    can_you_drive(age,has_car);
}