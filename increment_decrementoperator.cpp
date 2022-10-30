#include <iostream>
using namespace std;

int main(){

    int initial {10};
    int a = initial ++ +10;
    cout<< " a = initial++ +10 :"<<endl;
    cout<<" a is "<<a<<" whereas initial is changed to "<<initial<<endl;

    initial = 10;
    int b = ++initial +10;
    cout<<" b = ++ initial +10 :"<<endl;
    cout<< "b is "<<b<<" whereas initial is changed to "<<initial<<endl;

    
}