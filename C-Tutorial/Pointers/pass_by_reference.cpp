#include <iostream>
#include <string>
#include <vector>
using namespace std;
// all variables must have & operator to invoke reference

//pass integers example

void pass_by_ref1(int &num);

void pass_by_ref1(int &num){
    num = 1000;
}

//pass vector example
void pass_by_ref3(vector <string> &v){
    v.clear();
}

void print_vector(const vector <string> &v){
    for(auto s:v )
        cout<<s<<"";
    cout<<endl;
}




int main(){
    //integer exp
    int num{23};
    cout<<"number before invoking pass_by_ref1:"<<num<<endl;
    pass_by_ref1(num);
    cout<<"number after calling pass_by_ref1:"<<num<<endl;

    //vector exp
    vector<string>superpowers{"Victorian Britain","Napoleonic France","German Reich"};//initialize vector list 
    
    cout<<"Imperial Powers of Europe before pass_by_ref3:";
    print_vector(superpowers);//prints outcome before pass_ref_3

    pass_by_ref3(superpowers);

    cout<<"Imperial Powers after pass_by_ref3:";
    print_vector(superpowers);//[prints outcome after pass_ref_3

}


