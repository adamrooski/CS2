//Lab6_computerscience.cpp
//Mejan Rostamian, Adam Mejia
//parmejan@gmail.com, adamrooski@gmail.com
//Lab 6
//Temp and Pressure
//Sep 18, 2014


#include <iostream>
using namespace std;
int main()
{

    //DECLARE VARIABLES
    int temp(0);
    int pressure(0);
    int tempsum(0);
    int pressuresum(0);
    int num(0);
    char ans('y');

    //LOOP
    do
    {
    while(num < 10)
    {
        //ASK USER FOR INPUTS
        cout << "Please enter a temperature:\n";
        cin >> temp;

        cout << "Please enter a pressure:\n";
        cin >> pressure;

        tempsum += temp;
        pressuresum += pressure;

        if ( ((temp <= 32) && (pressure <100)) || ((temp >= 100) || (pressure >= 200)) )

            {
                 cout << "WARNING!\n";
            }
        else
            {
              cout << "OK!\n";
            }

        //ADD ONE TO COUNTER
        num++;
        }

    // DISPLAY SUMS OF PRESSURE AND TEMPERATURE
    cout << "The sum of your temperatures is "
         << tempsum
         << "\n"
         << "The sum of your pressures is "
         << pressuresum
         << "\n";

    //RESET COUNTER TO 0
    num = 0;

    //RESET SUMS TO 0
    tempsum = 0;
    pressuresum = 0;

    cout << "Do you want another emergency temperature pressure check?\n"
         << "Press y for yes, n for no,\n"
         << "and then press return: ";
    cin >> ans;

    } while (ans == 'y' || ans == 'Y');

    cout << "Good Bye\n";

         return 0;
}
