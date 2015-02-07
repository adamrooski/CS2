//File Name: Assignment13Problem08.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program does unit conversion.
//Last Modified: 10/27/2014

#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS
void askfirst(bool & islength_par);
void asksecond(bool & option_par);
void getinputs(bool islength_par, bool option_par, float & bigin_par, float & smallin_par);
void convert(bool islength_par, bool option_par, float bigin_par, float smallin_par, int & bigout_par, int & smallout_par);
void spitouts(bool islength_par, bool option_par, int bigout_par, int smallout_par);

//GLOBAL VARIABLES


//MAIN PROGRAM
int main()
{

    //DECLARE VARIABLES
    float bigin(0), smallin(0);
    char ans('y');
    bool islength(0), option(0);
    int bigout(0), smallout(0);

    //BEGIN PLAY AGAIN LOOP
    while(ans == 'y' || ans == 'Y')
    {        
     askfirst(islength);
     asksecond(option);
     getinputs(islength, option, bigin, smallin);
     convert(islength, option, bigin, smallin, bigout, smallout);
     spitouts(islength, option, bigout, smallout);


        //PLAY AGAIN WITH VALIDATION
        cout << "\nWould you like to run the calculation again?(Y/N)\n";
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

void askfirst(bool & islength_par)
{
    int response(0);
    while (response < 1 || response > 2)
    {
    cout << "To convert weights press 1\nTo convert lengths press 2\nPlease enter your selection:";
    cin >> response;
    }
    if (response == 1)
    {
        islength_par = false;
    }
    else if (response == 2)
    {
        islength_par = true;
    }
    else
    {
        cout << "\nAn error occurred.";
    }
}

void asksecond(bool & option_par)
{
    int response(0);
    while (response < 1 || response > 2)
    {
    cout << "\nTo convert from imperial to metric press 1\nTo convert from metric to imperial press 2\nPlease enter your selection:";
    cin >> response;
    }
    if (response == 1)
    {
        option_par = false;
    }
    else if (response == 2)
    {
        option_par = true;
    }
    else
    {
        cout << "\nAn error occurred.";
    }
}

void getinputs(bool islength_par, bool option_par, float & bigin_par, float & smallin_par)
{
if (!islength_par && !option_par)
{
    cout << "\nPlease enter number of pounds:";
    cin >> bigin_par;
    cout << "Please enter number of ounces:";
    cin >> smallin_par;
}
else if (!islength_par && option_par)
{
    cout << "\nPlease enter number of kilograms:";
    cin >> bigin_par;
    cout << "Please enter number of grams:";
    cin >> smallin_par;
}
else if (islength_par && !option_par)
{
    cout << "\nPlease enter number of feet:";
    cin >> bigin_par;
    cout << "Please enter number of inches:";
    cin >> smallin_par;
}
else if (islength_par && option_par)
{
    cout << "\nPlease enter number of meters:";
    cin >> bigin_par;
    cout << "Please enter number of centimeters:";
    cin >> smallin_par;
}
}

void convert(bool islength_par, bool option_par, float bigin_par, float smallin_par, int & bigout_par, int & smallout_par)
{
    if (!islength_par && !option_par)
    {
        float pounds(0), kilograms(0);
        pounds = bigin_par + (smallin_par / 16);
        kilograms = pounds / 2.2046;
        bigout_par = floor(kilograms);
        smallout_par = (kilograms - bigout_par) * 1000;
    }
    else if (!islength_par && option_par)
    {
        float pounds(0), kilograms(0);
        kilograms = bigin_par + (smallin_par / 1000);
        pounds = kilograms * 2.2046;
        bigout_par = floor(pounds);
        smallout_par = (pounds - bigout_par) * 16;
    }
    else if (islength_par && !option_par)
    {
        float feet(0), meters(0);
        feet = bigin_par + (smallin_par / 12.0);
        meters = feet * (.3048);
        bigout_par = floor(meters);
        smallout_par = (meters - bigout_par) * 100;
    }
    else if (islength_par && option_par)
    {
        float feet(0), meters(0);
        meters = bigin_par + (smallin_par / 100);
        feet = meters / .3048;
        bigout_par = floor(feet);
        smallout_par = (feet - bigout_par) * 12;
    }
}

void spitouts(bool islength_par, bool option_par, int bigout_par, int smallout_par)
{
    if (!islength_par && !option_par)
    {
        cout << "\n"
             << bigout_par
             << " kilograms "
             << smallout_par
             << " grams\n";
    }
    else if (!islength_par && option_par)
    {
        cout << "\n"
             << bigout_par
             << " pounds "
             << smallout_par
             << " ounces\n";
    }
    else if (islength_par && !option_par)
    {
        cout << "\n"
             << bigout_par
             << " meters "
             << smallout_par
             << " centimeters\n";
    }
    else if (islength_par && option_par)
    {
        cout << "\n"
             << bigout_par
             << " feet "
             << smallout_par
             << " inches\n";
    }
}

/*TEST RUN
To convert weights press 1
To convert lengths press 2
Please enter your selection:1

To convert from imperial to metric press 1
To convert from metric to imperial press 2
Please enter your selection:1

Please enter number of pounds:10
Please enter number of ounces:10

4 kilograms 819 grams

Would you like to run the calculation again?(Y/N)
y
To convert weights press 1
To convert lengths press 2
Please enter your selection:1

To convert from imperial to metric press 1
To convert from metric to imperial press 2
Please enter your selection:2

Please enter number of kilograms:10
Please enter number of grams:10

22 pounds 1 ounces

Would you like to run the calculation again?(Y/N)
y
To convert weights press 1
To convert lengths press 2
Please enter your selection:2

To convert from imperial to metric press 1
To convert from metric to imperial press 2
Please enter your selection:1

Please enter number of feet:10
Please enter number of inches:10

3 meters 30 centimeters

Would you like to run the calculation again?(Y/N)
y
To convert weights press 1
To convert lengths press 2
Please enter your selection:2

To convert from imperial to metric press 1
To convert from metric to imperial press 2
Please enter your selection:2

Please enter number of meters:10
Please enter number of centimeters:10

33 feet 1 inches

Would you like to run the calculation again?(Y/N)
n
Press <RETURN> to close this window...
*/
