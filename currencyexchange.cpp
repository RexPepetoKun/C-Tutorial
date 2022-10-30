#include <iostream>
using namespace std;

int main(){

    const double exchange_rate{0.21};

    cout<<"Welcome to Pepeto's Custom Made Currency Exchange Converter "<<endl;
    cout<<"Please enter your desired Malaysian Ringgit amount "<<endl;

    double ringgit{0};
    double USD{0};

    cin>>ringgit;
    USD = ringgit*exchange_rate;

    cout<< ringgit<<" ringgit is equivalent to "<<USD<<" US dollars ";

}







