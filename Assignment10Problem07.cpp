//Assignment10Problem07.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: Pg.176 #7
//Description: This program approximates a value of e^x.
//Revised: 09/30/2014

#include <iostream>
#include <cmath>
using namespace std;


int main ()
{
    //DECLARE VARIABLES
    double xin (0), factorial(1.0), num(1.0), sum(1.0), prod(1.0), exponential(0);
    char ans('y');

    while (ans == 'y' || ans == 'Y')
    {
    while (xin < 1)
    {
        cout << "Calculate e^x using the sum of a series.\n"
             << "Input x:";
        cin >> xin;
    }
    for(num = 1; num <= 100; num++)
    {
        factorial *= num;
        /*cout << factorial
             << "\n";*/
        prod *= xin;
        /*cout << prod
             << "\n";*/
        sum += prod/factorial;
        cout << sum
             << " ";
    }

    exponential = exp(xin);

    cout << "\ne^"
         << xin
         << " calculated using sum of a series:\n"
         << sum
         << "\n";

    cout << "e^"
         << xin
         << " calculated using exp() function:\n"
         << exponential
         << "\n";
    cout << "Would you like to play again?(Y/N)\n";
    cin  >> ans;

    //RESET NUM
    num = 1;
    sum = 1;
    prod = 1;
    factorial = 1;
    xin = 0;

}

  return 0;
}
