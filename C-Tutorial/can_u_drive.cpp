#include <iostream>
using namespace std;

int main(){
    int const legal_age = 16;
    int age;
    cout<<"How old are you?"<<endl;
    cin>>age;
    int n =(legal_age-age);
    
    if (age>=legal_age){
            cout<<"Congrats, you're old enough to drive";
        }
        else{
            cout<<"Sorry,you need to wait "<<n<<" more years.";
        }
    }





