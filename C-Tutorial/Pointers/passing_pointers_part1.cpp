#include <iostream>
#include <vector>
using namespace std;

    //* operator
    void double_data(int* int_ptr){
        *int_ptr *=2;       //*int_ptr ...asterik operator here is dereferencing/pointer whereas *=2 means multiply by 2.
        //*int_ptr means print value at this address provided.
    }


int main(){

    int value{10};
    int* int_ptr{nullptr};

    cout<<"Value:"<<value<<endl;
    double_data(&value);  //pass address to double_data function
    cout<<"Value:"<<value<<endl;








}