//File Name: Assignment08Problem10.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Assignment number: 08 Problem 10
//Description: BMR chocolate bar calculator (revised)
//Last Changed: 092314

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //DECLARE AND DEFINE VARIABLES
    double weight(0), height(0), age(0), bmr(0), bars(0);
    string ans("0"), sexin("0");
    char sex('m'), choice;
    ans = "yes";

do{
    cout << "Please enter your sex (M/F):\n";
    cin >> sexin;

    if (sexin == "m" || sexin == "M" || sexin == "male")
    {
        sex = 'm';
    }
    else if (sexin == "f" || sexin == "F" || sexin == "female")
    {
        sex = 'f';
    }
    else
    {
        cout << "Sorry we can't help you.\n";
        return 0;
    }

cout << "Please enter your weight in pounds:\n";
cin >> weight;

cout << "Please enter your height in inches:\n";
cin >> height;

cout << "Please enter your age in years:\n";
cin >> age;

cout << "Please give us a bit more information on your lifestyle:\n"
     << "Are you\n"
     << "A. Sedentary\n"
     << "B. Somewhat active (exercise occasionally)\n"
     << "C. Active (exercise 3-4 days per week)\n"
     << "D. Highly active (exercise every day)\n"
     << "Please enter your choice (A, B, C or D):";
cin >> choice;
//CASE CONTROL
switch (choice)
{
    case 'a':
        choice = 'A';
        break;
    case 'b':
        choice = 'B';
        break;
    case 'c':
        choice = 'C';
        break;
    case 'd':
        choice = 'D';
        break;
    default:
        ;
}

if (sex == 'm')
{
    bmr = 66 + 6.3 * weight + 12.9 * height - 6.8 * age;
    //MODIFIER SWITCH FOR MALES
    switch (choice)
    {
    case 'A':
        bmr *= 1.2;
        break;
    case 'B':
        bmr *= 1.3;
        break;
    case 'C':
        bmr *= 1.4;
        break;
    case 'D':
        bmr *= 1.5;
        break;
    default:
        cout << "Invalid input BMR calculated without modifier";
    }

    bars = bmr / 230;
    cout << "Your BMR is currently:"
         << bmr
         << "\n"
         << "In order to maintain constant body weight\nyou must consume "
         << bars
         << " bars of chocolate. \n";
    cout << "\nWould you like to calculate your candy bar needs again?\nY/N?\n";
    cin >> ans;
}
else
{
    bmr = 655 + 4.3 * weight + 4.7 * height - 4.7 * age;
    //MODIFIER SWITCH FOR FEMALES
    switch (choice)
    {
    case 'A':
        bmr *= 1.2;
        break;
    case 'B':
        bmr *= 1.3;
        break;
    case 'C':
        bmr *= 1.4;
        break;
    case 'D':
        bmr *= 1.5;
        break;
    default:
        cout << "Invalid input BMR calculated without modifier";
    }
    bars = bmr / 230;
    cout << "Your BMR is currently:"
         << bmr
         << "\n"
         << "In order to maintain constant body weight\nyou must consume "
         << bars
         << " bars of chocolate. \n";
    cout << "\nWould you like to calculate your candy bar needs again?\nY/N?\n";
    cin >> ans;
}
}
while (ans == "y" || ans == "Y" || ans == "yes" || ans == "Yes" || ans == "YES");

cout << "Thank you. Come again\n";

return 0;
    }
