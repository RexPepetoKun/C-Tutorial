#include <iostream>
using namespace std;

int main(){
    bool equal_result{};
    bool unequal_result{};
    cout<<boolalpha<<endl; // convert boolean values ( 0 or 1) to True or False
    int num1{},num2{};
    cout<<" Enter 2 integers separated by space"<<endl;
    cin>>num1>>num2;
    equal_result =(num1==num2);
    unequal_result =(num1!=num2);
    cout<<" Are both numbers equal? "<<equal_result<<endl;
    cout<<" Are both numbers different? "<<unequal_result<<endl;

}


