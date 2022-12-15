#include <iostream>
#include <vector>
using namespace std;

int main(){
    int scores[]{100,95,80};
    int *score_ptr{scores};

    cout<<scores<<endl;  //output address
    cout<<(scores+1)<<endl; //output address

    cout<<"Array subscript notation"<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;


    cout<<"Array offset notation"<<endl;
    cout<<*scores<<endl;//output value located at address; will give value at array index[0] by default
    cout<<*(scores+1)<<endl;


    cout<<"Pointer subscript notation"<<endl;
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;


    cout<<"Pointer offset notation "<<endl;
    cout<<*score_ptr<<endl;
    cout<<*(score_ptr+1)<<endl;

     





}