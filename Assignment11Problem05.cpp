//File Name: Assignment11Exercise05.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program will determine necesarry caloric intake based on weight, workout intensity, and  minutes exercising.
//Last Modified: 10/12/2014
#include <iostream>
#include <math.h>
using namespace std;

double bmr(double weight_par);
double physactivity(double exintensity_par, double weight_par, double exminutes_par);
double digestion(double bmr_par, double physactivity_par);
double totalcal(double bmr_par, double physactivity_par, double digestion_par);
double servings(double foodcal_par, double totalcal_par);


int main()
{
    //DECLARE VARIABLES
    char ans('y');
    double weight(0), exintensity(0), foodcal(0), exminutes(0);

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {
        cout << "Please enter your weight (in pounds):";
        cin >> weight;
        cout << "\nPlease enter the number of calories in your favorite food:";
        cin >> foodcal;
        cout  << "\nPlease enter the intensity of your workout(Scale of 1-20):";
        cin >> exintensity;
        cout << "\nPlease enter the number of minutes spent exercising:";
        cin >> exminutes;

        cout << "You must eat "
             << servings(foodcal, totalcal(bmr(weight), physactivity(exintensity, weight, exminutes), digestion(bmr(weight), physactivity(exintensity, weight, exminutes))))
             <<" servings of your favorite food in order to maintain current weight.\n";

        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the calculations again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the calculations again?(Y/N)\n";
            cin >> ans;
        }

    }
    return 0;
}

    double bmr(double weight_par)
    {
       return ( 70* pow( (weight_par/2.2) , .756 ) );
    }

    double physactivity(double exintensity_par, double weight_par, double exminutes_par)
    {
        return (.0385 * exintensity_par * weight_par * exminutes_par );
    }

    double digestion(double bmr_par, double physactivity_par)
    {
        return (bmr_par + physactivity_par) * .1;
    }

    double totalcal(double bmr_par, double physactivity_par, double digestion_par)
    {
        return bmr_par + physactivity_par + digestion_par;
    }

    double servings(double foodcal_par, double totalcal_par)
    {
        return totalcal_par / foodcal_par;
    }

    //SAMPLE RUN
    /*
Please enter your weight (in pounds):100

Please enter the number of calories in your favorite food:1000

Please enter the intensity of your workout(Scale of 1-20):10

Please enter the number of minutes spent exercising:20
You must eat 2.22617 servings of your favorite food in order to maintain current
 weight.
Would you like to run the calculations again?(Y/N)
y
Please enter your weight (in pounds):200

Please enter the number of calories in your favorite food:500

Please enter the intensity of your workout(Scale of 1-20):15

Please enter the number of minutes spent exercising:120
You must eat 35.1503 servings of your favorite food in order to maintain current
 weight.
Would you like to run the calculations again?(Y/N)
n
Press <RETURN> to close this window...
*/
