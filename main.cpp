//
//  main.cpp
//  Energy Drink Consumption
//
//  Created by Maya Moton on 4/27/26.
//

#include <iostream>
using namespace std;

int main() {
    int totalCustomers = 16500;
    double energyDrinkPercent = 0.15;
    double citrusPercent = 0.58;

    // Calculate number of customers who buy energy drinks
    int energyDrinkCustomers = totalCustomers * energyDrinkPercent;

    // Calculate number of customers who prefer citrus flavor
    int citrusCustomers = energyDrinkCustomers * citrusPercent;

    cout << "Energy drinks per week consumption: "
         << energyDrinkCustomers << endl;

    cout << "Those who pefer citrus flavored energy drinks: "
         << citrusCustomers << endl;

    return 0;
}
