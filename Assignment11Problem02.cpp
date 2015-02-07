//File Name: Assignment11Exercise02.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program will determine clothing sizes based on height, weight and age.
//Last Modified: 10/12/2014
#include <iostream>
using namespace std;

double hatsize(double weight_par, double height_par);
double chestmod(double age_par);
double chestsize(double chestmod_par, double height_par, double weight_par);
double waistmod(double age_par);
double waistsize(double weight_par, double waistmod_par);


int main()
{
    //DECLARE VARIABLES
    char ans('y');
    double weight(0), height(0), age(0);

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {
        cout << "Please enter your height (in inches):";
        cin >> height;
        cout << "\nPlease enter your weight (in pounds):";
        cin >> weight;
        cout  << "\nPlease enter your age (in years):";
        cin >> age;
        cout << "\n";

        cout << "Your hatsize is:"
             << hatsize(weight, height)
             << "\nYour jacket size is:"
             << chestsize(chestmod(age), height, weight)
             << "\nYour waist size is:"
             << waistsize(weight, waistmod(age))
             << "\n";

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


double hatsize(double weight_par, double height_par)
{
const double hatconst(2.9);
return ((weight_par/height_par)*hatconst);
}
double chestmod(double age_par)
{
    double modifier(0);
    double age;
    age = age_par;
    if(age_par >= 40)
    {
        for(age; age >=40; age = age - 10)
        {
            modifier += .125;
        }
        return modifier;
    }
    else
    {
        return 0;
    }
}

double chestsize(double chestmod_par, double height_par, double weight_par)
{
    const double chestconst(288);
    return (((height_par*weight_par)/chestconst)+chestmod_par);
}

double waistmod(double age_par)
{
    double modifier(0);
    double age;
    age = age_par;
    if(age_par >= 30)
    {
        for(age; age >= 30; age = age - 2)
        {
            modifier += .1;
        }
        return modifier;
    }
    else
    {
        return 0;
    }
}

double waistsize(double weight_par, double waistmod_par)
{
    const double waistconst(5.7);
    return ((weight_par/waistconst)+waistmod_par);
}

//TEST RUN
/*
Please enter your height (in inches):70

Please enter your weight (in pounds):200

Please enter your age (in years):20

Your hatsize is:8.28571
Your jacket size is:48.6111
Your waist size is:35.0877
Would you like to run the calculations again?(Y/N)

y
Please enter your height (in inches):70

Please enter your weight (in pounds):200

Please enter your age (in years):60

Your hatsize is:8.28571
Your jacket size is:48.9861
Your waist size is:36.6877
Would you like to run the calculations again?(Y/N)
n
Press <RETURN> to close this window...
*/
