//Assignment08Problem08.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment 08 Problem 08
//Description: Pi calculator
//Revised: 9/23/2014


#include <iostream>
#include <math.h>
using namespace std;
int main()
{

//DECLARE VARIABLES
    char ans('y');
    int num(0), n(1);
    double posneg(1), count(1), sum(1), pi(1);

do
    {
      cout << "Hello User\n"
           << "How many terms would you like to use in your calculation?\n"
           << "N=";
      cin >> num;
      for (n=1; n <= num; n++)
      {
         posneg *= (-1);
         sum = sum + (posneg / ((2*count)+1));
         //cout.setf(ios::fixed);
         cout.setf(ios::showpoint);
         /*TRACE POSITIVE NEGATIVE AND SUM
              cout << posneg
              <<"\n"
              << sum
              << "\n"; */
         count += 1;
      }
      pi = 4*sum;
      cout << pi
           << "\n";
        //LOOP BREAK
        cout << "How about one more? (Y/N)\n";
        cin >> ans;
        //RESET PI AND N
        pi = 1;
        n = 1;
        sum = 1;
        count = 1;
        posneg = 1;
    }
    while(ans == 'y' || ans == 'Y');
    cout << "Good Night Darling \n";
    return 0;
}
