#include <iostream>
using namespace std;


//In this exercise you will write a switch statement that displays the given
//name of the day of the week given the day code.


void display_day(int day_code) {
  switch(day_code){

    case 0:
        cout<<"Sunday"<<endl;
        break;
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    default:
        cout<<"Invalid"<<endl;
    }
}
int main() {
    int day_code;
    cout<<"Enter a single digit to display the day of the week"<<endl;
    cin>>day_code;
    display_day(day_code);

}
















  









    
