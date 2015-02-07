//File Name: Lab 10.cpp
//Authoe: Yujia Huang, Adam Mejia
//Email Address: yhuang32@go.pasadena.edu, adamrooski@gmail.com
//Description: Program to determine the closest temperatures that replace the desired temperature.
//Last Changed: October 09,2014

#include <iostream>

using namespace std;
bool contains_147 (int tempin_par);
bool containsDigit (int tempin_par, int digit_par);
const int one(1), four(4), seven(7);
int tempin, ones, tens, hundreds, temphi, templow;
char ans;

int main()
{

    do
    {
    cout << "Please enter the temperature you want:\n";
    cin >> tempin;

    while (tempin <0 || tempin > 999)
    {
        cout << "Invalid temperature! Please try again.\n"
                "Please enter the temperature you want:\n";
    cin >> tempin;
    }
    if (contains_147(tempin))
    {
    temphi = tempin;
    templow = tempin;

    while (contains_147(temphi))
        temphi++;
    while (contains_147(templow))
        templow--;

    cout << "Due to the buttons of 1, 4, and 7 have been damaged,\n"
            "you should enter " << temphi <<" or " << templow << " in order to function your oven.\n";
    }

    else if(!contains_147(tempin))
    {
        cout << "Your temperature is: " << tempin << endl;
    }
    cout << "Do you want to check another temperature?\n"
            "Enter Y for yes, N for no.\n";
    cin >> ans;

    }while (ans == 'Y' || ans == 'y');

    return 0;
}

    bool contains_147 (int tempin_par)
    {
   if (containsDigit(tempin_par, one) || containsDigit(tempin_par, four) || containsDigit(tempin_par, seven))
       return 1;
   else
       return 0;
    }

    bool containsDigit (int tempin_par, int digit_par)
    {
        ones = tempin_par %10;
        tens = (tempin_par / 10) % 10;
        hundreds = tempin_par / 100;

        if (digit_par == ones || digit_par == tens || digit_par == hundreds)
            return 1;
        else
            return 0;
    }

/*Sample Output:
Please enter the temperature you want:
300
Your temperature is: 300
Do you want to check another temperature?
Enter Y for yes, N for no.
y
Please enter the temperature you want:
147
Due to the buttons of 1, 4, and 7 have been damaged,
you should enter 200 or 99 in order to function your oven.
Do you want to check another temperature?
Enter Y for yes, N for no.
n
Press <RETURN> to close this window...*/


