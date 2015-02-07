//File Name: Assignment12Problem5.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program calculates windchill index using windspeed and ambient temperature.
//Last Modified: 10/19/2014

#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS

//REQUEST INPUTS
void getinputs(double & tempcelsius_par, double & windspeed_par);
//CALCULATE WINDCHILL
double calcwindchill(double tempcelsius_par, double windspeed_par);
//OUTPUT WINDCHILL INDEX
void giveoutputs(double windchill_par);

//MAIN PROGRAM
int main()
{

    //DECLARE VARIABLES
    char ans('y');
    double windspeed(0), tempcelsius(0);



    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {

    getinputs(tempcelsius, windspeed);
    giveoutputs(calcwindchill(tempcelsius, windspeed));

        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the calculation again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the calculation again?(Y/N)\n";
            cin >> ans;
        }

    }
    return 0;
}

//FUNCTION DEFINITIONS

void getinputs(double & tempcelsius_par, double & windspeed_par)
{
    cout << "Please input the windspeed in miles per hour:";
    cin >> windspeed_par;
    do{
        cout << "\nPlease input the temperature in degrees celsius\n(must be less than or equal to 10 degrees):";
        cin >> tempcelsius_par;
    } while (tempcelsius_par > 10.0);
}

double calcwindchill(double tempcelsius_par, double windspeed_par)
{
    return 13.12+(.6215*tempcelsius_par)-(11.37*pow(windspeed_par,0.16))+(.3965*tempcelsius_par*pow(windspeed_par,0.016));
}

void giveoutputs(double windchill_par)
{
    cout << "\nThe windchill index temperature is calculated at "
         << windchill_par
         << ".\n";
}
