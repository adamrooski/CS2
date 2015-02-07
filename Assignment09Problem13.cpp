//Assignment09Problem13.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: Pg.178 #13
//Description: This program cracks the Riddler's code.
//Revised: 09/29/2014

#include <iostream>
using namespace std;


int main ()
{
    //DECLARE VARIABLES
    int num(0), sum(0), thousand(0), hundred(0), ten(0), one(0), crit4(0), crit2(0), crit1(0);
    for(num = 1023; num <= 9999; num += 2)
    {
        thousand = num/1000;
        hundred = (num%1000)/100;
        ten = (num%100)/10;
        one = num%10;
        sum = thousand + hundred + ten + one;

        /*cout << thousand
             << hundred
             << ten
             << one
             <<"\n";*/
        if (sum == 27)
        {
            crit4 = 1;
        }
        else
        {
            crit4 = 0;
        }
        if (thousand == 3 * ten)
        {
            crit2 = 1;
        }
        else
        {
            crit2 = 0;
        }
        if (thousand != hundred && hundred != ten && ten != one && thousand != ten && thousand != one && hundred != one)
        {
            crit1 = 1;
        }
        else
        {
            crit1 = 0;
        }
        if (crit1 == 1 && crit2 == 1 && crit4 == 1)
        {
            cout << num
                 << "\n";
        }
        else
        {
            ;
        }


    }


  return 0;
}
