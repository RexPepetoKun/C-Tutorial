#include <iostream>
using namespace std;

int main(){                                        //1. Use if-else loop.
    int number;                                    //2. within else, use do_while loop.
    cout<<"Enter your number"<<endl;
    cin>>number;
    if (number<0){
        cout<<"Houston we have a problem!"<<endl;
    }
    else{
        do {
            number--; //decrement number by 1 each time
            cout<<number<<endl;
        }
        while(number>0);
        cout<<"Mission Control,we have lift-off!!"<<endl;
    }

}