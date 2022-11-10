#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec {1,2,3};
    int i{0};
    int j{0};
    int n=size(vec);
    for(i;i<n;++i,j=0){
        for(j;j<n;++j){
            int a=vec.at(i)*vec.at(j);
            if(a!=0) {
                cout<<a<<endl;
            }
            else {cout<<"skip"<<endl;}
        }
    }

}


















