#include <iostream>
#include <vector>
#include <numeric>  //numeric is library to call accumulate function
using namespace std;

int main(){

    vector <int> vec {2,4,6,8};
    int i{0};
    int j{0};
    int n=size(vec);
    int a{0};
    int result{};

        for(i;i<n;++i){
            for(j=i+1;j<n;++j){
                a=vec.at(i)*vec.at(j);
                result = result + vec.at(i) * vec.at(j);
                
                }
        }
        cout<<result<<endl;
    }




















