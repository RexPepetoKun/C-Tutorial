#include <iostream>
#include <vector>
using namespace std;

int main(){

    int num{100};
    int &ref{num};  //ref is an alias of num

    cout<<num<<endl;
    cout<<ref<<endl;

    num = 200;
    cout<<"\n-----------"<<endl;
    cout<<num<<endl;    //200
    cout<<ref<<endl;    //200

    cout<<"\n------------"<<endl;

    vector <string>stooges{"larry","moe","curly"};
    for(auto str:stooges){
        str ="Funny";
        cout<<str<<endl;
        cout<<str<<endl;    // although we set str to "Funny", str will still give "larry","moe","curly".
                            // because in the first forloop, we are changing the copies only and not the actuals.

    }

    //to change actuals, we use the below forloop:
    for(auto &str:stooges){ //insert &str instead of str to make it a reference to each vector element
        str ="Funny";
        cout<<str<<endl;    //
    }

    


}