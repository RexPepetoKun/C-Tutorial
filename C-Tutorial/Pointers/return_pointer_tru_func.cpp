#include <iostream>
#include <vector>
using namespace std;

int * create_array(size_t size,int init_value){// dont understand use of size_t here
    int* new_ptr{nullptr};// declare new_storage as a pointer object and set its initial value to nothing.
    new_ptr =new int[size]; //invoke "new" to create 'array of integers'[size]. 

    for(size_t i{0}; i<size; ++i){//
        *(new_ptr+i)=init_value;//i set every block to same value(init_value) using dereferencing* .
        return new_ptr;// earlier defined new_ptr as pointer object, meaning its address is returned.
    }
}


void display(int* array_ptr,size_t size){
    for(size_t i{0};i<size;++i){
        cout<<(*array_ptr)[i]<<endl;
      
    }
}

int main(){

    int* array_ptr{nullptr}; //declare a pointer object and initialize to point to nothing.
    size_t size;
    int init_value{};

    cout<<"How many integers would you like to allocate?";
    cin>>size;
    cout<<"What value would you like them initiallized to?";
    cin>>init_value;

    array_ptr = create_array(size,init_value);
    //cout<<array_ptr;
    display(array_ptr,size);

    delete[] array_ptr;
    return 0;


}
