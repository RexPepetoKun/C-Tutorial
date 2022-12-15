# include <iostream>
using namespace std;

int main(){
    cout<<boolalpha; //needed otherwise will return 0 for False or 1 for True instead
    int lower{},upper{},random{};
    cout<<"First,enter lower and upper Range: "<<endl;
    cin>>lower>>upper;
    cout<<"Next, enter any random number to test validity within boundary set:"<<endl;
    cin>>random;
    
    bool within_bounds{};
    within_bounds=(random>lower&&random<upper);
    cout<<"\nIs your number within the bounds?"<< within_bounds;

    bool outside_bounds{};
    outside_bounds=(random>upper||random<lower);
    cout<<"\nIs your number outside the bounds? "<<outside_bounds;

    bool on_bounds{};
    on_bounds=(random==lower||random==upper);
    cout<<"\nIs your number at either bounds?"<<on_bounds;

}




    

