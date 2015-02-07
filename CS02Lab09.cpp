//CS02Lab09.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: Lab 09
//Description: This program calculates MPG from liters consumed and miles traveled.
//Revised: 10/07/2014

#include <iostream>
#include <string>
using namespace std;

double mpgFunc(double liters_par, double miles_par); //THIS FUNCTION RETURNS MPG USING LITERS AND MILES
string displayFunc(double mpg1_par, double mpg2_par); //THIS FUNCTION USES 2 CALCULATED MPG FOR COMPARISON AND OUTPUTS A COMPARISON
const double GAL_PER_LITER(.264179); //GALLONS PER LITER

int main ()
{
    //DECLARE VARIABLES
    double liters1(0), miles1(0),liters2(0),miles2(0),mpg1(0),mpg2(0);
    string comparison;
    char ans('y');


    //BEGIN PLAY AGAIN LOOP
    while (ans == 'y' || ans == 'Y')
    {

        cout << "How far didyer first car go? (Use Miles)\n";
        cin >> miles1;
        cout << "\nHow much petrol didyer first car burn? (Use Liters)\n";
        cin >> liters1;
        cout << "\n";
        cout << "How far didyer second car go? (Use Miles)\n";
        cin >> miles2;
        cout << "\nHow much petrol didyer second car burn? (Use Liters)\n";
        cin >> liters2;
        cout << "\n";

        mpg1 = mpgFunc(liters1, miles1);
        mpg2 = mpgFunc(liters2, miles2);

        comparison = displayFunc(mpg1, mpg2);

        cout << "Car 1 gets "
             << mpg1
             << " MPG\nCar 2 gets "
             << mpg2
             << " MPG\n";
        cout << comparison
             << "\n";

        cout << "Would you like to run the simulation again?(Y/N)\n";
        cin >> ans;


        //RESET VARIABLES



    } //END PLAY AGAIN LOOP

  return 0;
}

//MPG FUNCTION DEFINITION
double mpgFunc(double liters_par, double miles_par)
{
    double mpg, gallons;
    gallons = liters_par * GAL_PER_LITER;
    mpg = miles_par / gallons;
    return mpg;
}
//DISPLAY FUNCTION DEFINITION
string displayFunc(double mpg1_par, double mpg2_par)
{
    string comparison;


    if (mpg1_par > mpg2_par)
    {
        comparison = "Car 1 gets better mileage.\n";
    }
    else if (mpg2_par > mpg1_par)
    {
        comparison = "Car 2 gets better mileage.\n";
    }
    else
    {
        comparison = "The cars get the same number of miles per gallon.\n";
    }
    return comparison;
}

/*
 * SAMPLE RUN
How far didyer first car go? (Use Miles)
100

How much petrol didyer first car burn? (Use Liters)
25

How far didyer second car go? (Use Miles)
100

How much petrol didyer second car burn? (Use Liters)
24

Car 1 gets 15.1412 MPG
Car 2 gets 15.7721 MPG
Car 2 gets better mileage.

Would you like to run the simulation again?(Y/N)
n
*/

