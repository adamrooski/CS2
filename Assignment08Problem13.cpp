//File Name: Assignment08Problem13.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Assignment number: 08
//Description: BMR chocolate bar calculator
//Last Changed: 091714

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //DECLARE AND DEFINE VARIABLES
    double weight(0), height(0), age(0), bmr(0), bars(0);
    string ans("0"), sexin("0");
    char sex('m');
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

if (sex == 'm')
{
    bmr = 66 + 6.3 * weight + 12.9 * height - 6.8 * age;
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
