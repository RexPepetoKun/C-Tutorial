#include <iostream>
#include <vector>
using namespace std;

int main(){

//Example 1:
    int score{100};
    int *score_ptr{&score};

    cout<<*score_ptr<<endl;
 
// Example 2:
    string name{"Frank"};
    string *name_ptr{&name};

    cout<<*name_ptr<<endl;

//Example 3:
    vector <string> stooges{"Idiot","Moron","Stupid"};
    vector <string> *vector_ptr{nullptr};
    vector_ptr =&stooges;

    cout<<"First stooge is:"<<(*vector_ptr).at(0)<<endl;
    cout<<"First stooge is:"<<(stooges).at(0)<<endl;    //Equivalent to the line before.


    for (auto stooge:*vector_ptr){  //for(auto stooge:stooges) will give same output
        cout<<stooge<<endl;
    }
    











}