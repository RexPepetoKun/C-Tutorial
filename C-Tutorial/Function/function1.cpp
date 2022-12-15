//In this exercise you will create a program that will be used as a POS (Point of Sale) system in a restaurant. The bill_total is given as well as the number_of_guests. The 5 guests will be splitting the bill evenly and so the individual_bill will be bill_total / number_of_guests. The POS will be used in three different locations, each with different guidelines for printing bills.
//At location 1, individual_bill_1 always rounds down to the nearest dollar.
//At location 2, individual_bill_2 always rounds to the nearest dollar.
//At location 3, individual_bill_3 always rounds up to the nearest cent

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double bill_total {102.78};
    int number_of_guests {5};

    double individual_bill{bill_total/number_of_guests};
    int individual_bill_1 = floor(individual_bill);
    int individual_bill_2 = round(individual_bill);
    int individual_bill_3 = ceil(individual_bill);

    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
}