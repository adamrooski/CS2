//File Name: Assignment12Problem06.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program helps some jerks kill each other.
//Last Modified: 10/19/2014

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

//FUNCTION DECLARATIONS
void shoot(bool & targetAlive, double accuracy);
void startDuel(bool & aaronAlive_par, bool & bobAlive_par, bool & charlieAlive_par);

//MAIN PROGRAM
int main()
{
    //SEED RANDOM
    srand(time(NULL));

    //DECLARE VARIABLES
    char ans('y');
    bool aaronAlive(1), bobAlive(1), charlieAlive(1);
    int count(0), countAaron(0),countBob(0),countCharlie(0);

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {
for (count = 0; count < 1000; count++)
{
    startDuel(aaronAlive, bobAlive, charlieAlive);
    if (aaronAlive)
    {countAaron += 1;}
    else if (bobAlive)
    {countBob += 1;}
    else if (charlieAlive)
    {countCharlie += 1;}
    else
    {cout << "Something went wrong.\n";}

    //RESET VARIABLES
    aaronAlive = 1;
    bobAlive = 1;
    charlieAlive = 1;
}
    cout << "Aaron:" << countAaron << "\nBob:" << countBob << "\nCharlie:" << countCharlie << "\n";
    //RESET VARIABLES
    countAaron = 0;
    countBob = 0;
    countCharlie = 0;
        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the calculation again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the calculation again?(Y/N)\n";
            cin >> ans;
        }



    }
    return 0;
}

//FUNCTION DEFINITIONS

void shoot(bool & targetAlive, double accuracy)
{
    if (targetAlive == 0)
    {
        return;
    }
    double shotroll(0.0);
    shotroll = (rand() % 1000) / 1000.0;
    if ( shotroll < accuracy)
    {
        targetAlive = 0;
    }
    else
        return;
}

void startDuel(bool & aaronAlive_par, bool & bobAlive_par, bool & charlieAlive_par)
{
    double aaronAccuracy(.333), bobAccuracy(.5), charlieAccuracy(1);
    bool aaronFirstShot(1);

    while ((aaronAlive_par && bobAlive_par && charlieAlive_par) || (aaronAlive_par && bobAlive_par) || (aaronAlive_par && charlieAlive_par) || (bobAlive_par && charlieAlive_par))
    {

    if (aaronAlive_par)
    {
        if (aaronFirstShot)
        {
            aaronFirstShot = 0;
        }
        else if (charlieAlive_par)
        {
            shoot(charlieAlive_par, aaronAccuracy);
        }
        else if (bobAlive_par)
        {
            shoot(bobAlive_par, aaronAccuracy);
        }
    }
    if ( bobAlive_par == 1)
    {
        if (charlieAlive_par == 1)
        {
            shoot(charlieAlive_par, bobAccuracy);
        }
        else if (aaronAlive_par == 1)
        {
            shoot(aaronAlive_par, bobAccuracy);
        }
    }
    if ( charlieAlive_par == 1)
    {
        if (aaronAlive_par == 1)
        {
            shoot(aaronAlive_par, charlieAccuracy);
        }
        else if (bobAlive_par == 1)
        {
            shoot(bobAlive_par, charlieAccuracy);
        }
    }
    }
    if (aaronAlive_par)
    {cout << "Aaron wins.\n";}
    else if (bobAlive_par)
    {cout << "Bob wins.\n";}
    else if (charlieAlive_par)
           {cout << "Charlie wins.\n";}
    else
    {cout << "Something went wrong.\n";}

}
