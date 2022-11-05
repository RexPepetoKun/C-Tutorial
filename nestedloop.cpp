#include <iostream>
using namespace std;

// multiplication table

int main(){
    int number1{},number2{};
    cout<<"Multiplication Table"<<endl;
    cout<<"Enter Number1"<<endl;
    cin>>number1;
    cout<<"Enter Number2"<<endl;
    cin>>number2;
    for (number1;number1<=10;++number1,number2=1){
        for(number2;number2<=10;){
            while(number2<=10){
                cout<<number1<<" x "<<number2<<" equals "<<number1*number2<<endl;
                ++number2;
            }
        }
        

    }
}