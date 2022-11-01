#include <iostream>
using namespace std;

void can_you_drive(int age) {

    int const legal_age{16};
    int n = (legal_age - age);
    if (age>=legal_age){
        cout<<"Yes-you can drive!>>";}

    else {
        cout<<"Sorry,come back in"<<n<<"years";}

    cout<<"Can you legally old enough to drive?"<<endl;
    cout<<"How old are you?"<<endl;
    cin>>age;
    cout<<can_you_drive<<endl;
}








