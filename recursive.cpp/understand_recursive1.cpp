#include <iostream>
#include <iomanip>
using namespace std;

double a_penny_doubled_everyday(int days,double amount=0.01){
    if (days <= 1){
        cout<<days<<"="<<amount<<endl;
        return amount;
    }
    cout<<days<<"="<<amount<<endl;
    a_penny_doubled_everyday(--days, amount*2);

}

int main(){

    cout<<"total pennies accumulated at the end:"<<a_penny_doubled_everyday(9)<<endl;


}