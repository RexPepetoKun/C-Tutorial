#include <iostream>
#include <cmath>
using namespace std;


//----WRITE YOUR FUNCTION PROTOTYPES BELOW THIS LINE----
double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);
//----------------------------------------------------


void temperature_conversion(double fahrenheit_temperature) {

    
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    
    //------------------------------------------------------------

    

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}




//----WRITE YOUR FUNCTION DEFINITIONS BELOW THIS LINE----

double fahrenheit_to_celsius(double temperature) {
    return round(((temperature - 32)*5)/9);
} 

double fahrenheit_to_kelvin(double temperature) {
    return round(((temperature - 32)*5)/9 + 273);
}

