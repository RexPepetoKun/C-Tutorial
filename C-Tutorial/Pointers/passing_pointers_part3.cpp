#include <iostream>
#include <vector>
using namespace std;

void display(vector<string> *v){
    for (auto str:*v){
        cout<<str<<""<<endl;
    }

}

void display(char* array,char nonsense){  //no problem giving same name(display) to this func as previous func.
    while(* array!=nonsense){           
        cout<<*array++<<endl;
    }
    
}


int main(){


    vector <string> rom_kaiser{"Caesar","Augustus","Constantine"};
    display(&rom_kaiser);//passing in the address of vector rom_kaiser


    //array
    char letters[]{'a','b','e','end'};
    display(letters,'end');

}