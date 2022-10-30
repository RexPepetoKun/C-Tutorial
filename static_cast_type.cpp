//How to use static cast type

#include <iostream>
using namespace std;

int main(){

    
    // Udemy's example
    int a =100;
    int b = 8;
    cout << "Static cast the 'a'= " << static_cast<double>(a)/b <<endl;
    cout << "Static cast the 'b'= " << a/static_cast<double>(b) << endl;
    cout << "Without static cast = " << a/b << endl;
    



}