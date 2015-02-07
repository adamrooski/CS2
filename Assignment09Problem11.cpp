//Assignment09Problem11.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: Pg.178 #11
//Description: This program handles a broken keypad for a microwave or something like that.
//Revised: 09/29/2014

#include <iostream>
using namespace std;

int main ()
{
    //DECLARE VARIABLES
int tempin(1000), tenhigh(0), tenlow(0), onehigh(0), onelow(0), hundred(0), ten(0), one(0);
char ans('y');

while(ans == 'y' || ans == 'Y')
{
    //REQUEST INPUTS
    while (tempin < 0 || tempin > 999)
    {
        cout << "How hot do you want it?(0-999)\n";
        cin >> tempin;
    }

    hundred = tempin/100;
    ten = (tempin%100)/10;
    one = tempin%10;

    if (tempin > 99 && tempin <200)
    {
        cout << "99 or 200\n";
    }
    else if (tempin > 399 && tempin < 500)
    {
        cout << "399 or 500\n";
    }
    else if (tempin > 699 && tempin < 800)
    {
        cout << "699 or 800\n";
    }
    else if ((ten == 1 || ten == 4 || ten == 7) || (one == 1 || one == 4 || one == 7))
    {

        if ((ten == 1 || ten == 4 || ten == 7) && (one == 1 || one == 4 || one == 7))
        {
            tenhigh = ten + 1;
            tenlow = ten - 1;
            onehigh = one + 1;
            onelow = one - 1;
        }
        else if (ten == 1 || ten == 4 || ten == 7)
        {
            tenhigh = ten + 1;
            tenlow = ten - 1;
            onehigh = one;
            onelow = one;
        }
        else if (one == 1 || one == 4 || one == 7)
        {
            tenhigh = ten;
            tenlow = ten;
            onehigh = one + 1;
            onelow = one - 1;
        }
        cout << hundred
             << tenhigh
             << onehigh
             << "\n";
        cout << hundred
             << tenlow
             << onelow
             << "\n";

    }
    else
    {
        cout << tempin
             << "\n";
    }

    //PLAY IT AGAIN
    cout << "Would you like to play again?(Y/N)\n";
    cin >> ans;
    tempin = 1000;

}
  return 0;
}
