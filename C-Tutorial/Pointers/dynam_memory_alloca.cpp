#include <iostream>
#include <vector>
using namespace std;


int main(){

// //Dynamic Memory Allocation
//     //Example 1: allocate space on heap for integer datatype
//     int* int_ptr{nullptr};
//     int_ptr = new int;  //new is keyword to allocate vacant memory address in heap/free store to store data of int type.
//     cout<<int_ptr<<endl; // output will be address
//                         // this int variable created has no name and can only be accessed by pointer object.
//     delete int_ptr; // once variable no longer needed, delete the pointer.

    //Example 2: allocate space on heap for array

    size_t size{0};
    double *temp_ptr{nullptr};

    cout<<"How many temps?";  //temps here mean temporary data
    cin>>size;

    temp_ptr = new double[size];  //allocate array on heap

    cout<<temp_ptr<<endl;   //print address
    cout<<*temp_ptr<<endl;  //should print value
    delete[] temp_ptr;      //free allocated space after task done to free up space








}