#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
    //----WRITE YOUR CODE BELOW THIS LINE----

    cout<<"In func: has_car="<<has_car<< " , age="<<age <<endl;

    if (has_car == true){

        cout<<"Ck pt 1"<<endl;
        if (age >=16){
            cout<<"Yes-you can drive"<<endl;
        }
        else {
            cout<<"Sorry, come back after"<<16-age<<"years."<<endl;
        }
    }
    else {
        cout<<"Ck pt 2"<<endl;
        cout<<"Sorry,you need to buy a car before you can drive"<<endl;
    }



}
int main(){
    int age;
    bool has_car{true};

    
    cout<<"You own a car. true(1) or false(0)?"<<endl;
    cout<<has_car<<endl;
    //cin>>has_car;
    cout<<"Please state your age:"<<endl;
    cin>>age;

    cout<<"In main: has_car="<<has_car<< " , age="<<age <<endl;

    can_you_drive(age,has_car);
}