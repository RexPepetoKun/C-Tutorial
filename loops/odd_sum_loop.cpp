#include <iostream>
using namespace std;
#include <math.h>

//Sum of odd integers from 1 to 15 inclusive;
// for(counter;condition;iteration)
int main(){
    int sum{0};

    for (int i=1;i<=15;i++){
        if (i%2!=0){
           sum +=i;
           cout<<sum<<"\n";
        }
    }
    
    cout<<"Final Answer:"<<sum;


}

