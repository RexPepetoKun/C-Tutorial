#include <iostream>
#include <vector>
using namespace std;

void swap(int* a,int* b){
    int temporary =*a;      //*a retrieves value stored by a and transfers it to empty variable we named temporary
    *a =*b;                 //*b transfers its value(not the address) to empty a.
    *b= temporary;          //temporary which now stores previous a value transfers it to the now vacant empty b
}


int main(){

    int x{100},y{200};
    cout<<"x:"<<x<<endl;
    cout<<"y"<<y<<endl;

    swap(&x,&y);

    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;

    











}