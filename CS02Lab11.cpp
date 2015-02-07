//File Name: CS02Lab11.cpp
//Author: Yujia Huang, Adam Mejia
//Email: yhuang32@go.pasadena.edu, adamrooski@gmail.com
//Description: This program uses overloaded functions to compare 2 or 3 numbers.
//Last Modified: 10/14/2014

#include <iostream>
using namespace std;

//COMPARISON FUNCTION
double max(double num1_par, double num2_par);
double max(double num1_par, double num2_par, double num3_par);
//VALIDATION FUNCTION
void maxvalidation(double&num1_par, double&num2_par);
void maxvalidation(double&num1_par, double&num2_par, double&num3_par);



int main()
{


    //DECLARE VARIABLES
    char ans('y');
    int numofparams(0);
    double num1(0), num2(0), num3(0), maxnum(0);
    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {

        cout << "Would you like to compare 2 or 3 numbers:";
        cin >> numofparams;
        while (numofparams <2 || numofparams > 3)
        {
            cout << "I'm sorry, I don't understand. Please enter 2 or 3.\n";
                    cin >> numofparams;
        }

        if(numofparams == 2)
        {
            cout << "\nPlease enter your first number:";
            cin >> num1;
            cout << "\nPlease enter your second number:";
            cin >> num2;
            maxvalidation(num1, num2);
            maxnum = max(num1, num2);
            cout << "\nThe largest number is "
                 << maxnum
                 << "\n";
        }
        else if(numofparams == 3)
        {
            cout << "\nPlease enter your first number:";
            cin >> num1;
            cout << "\nPlease enter your second number:";
            cin >> num2;
            cout << "\nPlease enter your third number:";
            cin >> num3;
            maxvalidation(num1, num2, num3);
            maxnum = max(num1, num2, num3);
            cout << "\nThe largest number is "
                 << maxnum
                 << "\n";
        }

        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the comparison again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the simulation again?(Y/N)\n";
            cin >> ans;
        }

    }
    return 0;
}

//VALIDATES THAT THE TWO NUMBERS ARE NOT THE SAME
void maxvalidation(double&num1_par, double&num2_par)
{
    while(num1_par == num2_par)
    {
        cout << "\nI'm sorry but the numbers can't be the same.\nPlease re-enter your first number:";
        cin >> num1_par;
        cout << "\nPlease re-enter your second number:";
        cin >> num2_par;
        cout << "\n";
    }
}
//VALIDATES THAT NONE OF THE THREE NUMBERS ARE THE SAME
void maxvalidation(double&num1_par, double&num2_par, double&num3_par)
{
    while(num1_par == num2_par || num1_par == num3_par || num2_par == num3_par)
    {
        cout << "\nI'm sorry but the numbers can't be the same.\nPlease re-enter your first number:";
        cin >> num1_par;
        cout << "\nPlease re-enter your second number:";
        cin >> num2_par;
        cout << "\n";
        cout << "Please re-enter your third number:";
        cin >> num3_par;
        cout << "\n";
    }
}
//COMPARES 2 NUMBERS AND RETURNS LARGEST
double max(double num1_par, double num2_par)
{
return num1_par > num2_par ? num1_par : num2_par;
}
//COMPARES 3 NUMBERS AND RETURNS LARGEST
double max(double num1_par, double num2_par, double num3_par)
{
    return (num1_par > num2_par && num1_par > num3_par) ? num1_par :
           (num2_par > num1_par && num2_par > num3_par) ? num2_par :
           (num3_par > num1_par && num3_par > num2_par) ? num3_par :
            0;
}
/* TEST RUN
Would you like to compare 2 or 3 numbers:9
I'm sorry, I don't understand. Please enter 2 or 3.
-9
I'm sorry, I don't understand. Please enter 2 or 3.
2

Please enter your first number:1

Please enter your second number:1

I'm sorry but the numbers can't be the same.
Please re-enter your first number:1

Please re-enter your second number:2


The largest number is 2
Would you like to run the comparison again?(Y/N)
y
Would you like to compare 2 or 3 numbers:3

Please enter your first number:-9

Please enter your second number:.0254

Please enter your third number:3.159

The largest number is 3.159
Would you like to run the comparison again?(Y/N)
n
Press <RETURN> to close this window...

*/
