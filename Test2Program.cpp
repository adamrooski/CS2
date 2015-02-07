//Test2Program.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: Test 2
//Description: This program does multiplication using addition.
//Revised: 10/02/2014

#include <iostream>
using namespace std;


int main ()
{
    //DECLARE VARIABLES
    double input1(0), sum(0);
    int input2(0), num(0);
    char ans('y');
    while (ans == 'y' || ans == 'Y')
    {
        cout << "Please input first number to multiply by\n(integer, decimal, negative or positive)\n";
        cin >> input1;
        while (input2 < 1)
        {
            cout << "Please input second number to multiply by\n(positive integer only)\n";
            cout << input1
                 <<"*";
            cin >> input2;
        }

        for(num = 1; num <= input2; num++)
        {
            sum += input1;
        }

        cout << sum
             << "\n";

        cout << "Would you like to continue?(Y/N)\n";
        cin >> ans;
        //RESET VARIABLES
        input2 = 0;
        sum = 0;
    }

  return 0;
}
