//Assignment10Problem09.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: 10-09
//Description: This program simulates the Monty Hall game with switch or not set to random for 10,000 iterations.
//Revised: 10/05/2014

#include <iostream>
#include <time.h>
#include <random>

using namespace std;


int main ()
{
    //DECLARE VARIABLES
    int switcheroo(0), windoor(0), pickdoor(0), winner(0),picker(0),lose(0), count(0);
    int winA(0), winB(0), winC(0), pickA(0), pickB(0), pickC(0), elimA(0), elimB(0), elimC(0);
    double yesprob(0),noprob(0), switches(0), noswitchwin(0),switchwin(0);
    char ans('y');

    //SEED RANDOM
    srand (time(NULL));

    //BEGIN PLAY AGAIN LOOP
    while (ans == 'y' || ans == 'Y')
    {
//BEGIN FOR LOOP
        for (count = 0; count < 10000; count++)
        {
        //PICK WINNING DOOR
        windoor = rand() % 3 + 1;
        switch (windoor)
        {
        case 1:
            winA = 1;
            winner = 1;
            break;
        case 2:
            winB = 1;
            winner = 2;
            break;
        case 3:
            winC = 1;
            winner = 3;
            break;
        default:
            cout << "AN ERROR OCCURRED 1";
        }

        //PICK USER DOOR
        pickdoor = rand() % 3 + 1;
        switch (pickdoor)
        {
        case 1:
            pickA = 1;
            picker = 1;
            break;
        case 2:
            pickB = 1;
            picker = 2;
            break;
        case 3:
            pickC = 1;
            picker = 3;
            break;
        default:
            cout << "AN ERROR OCCURRED 2";
        }
        //ELIMINATE DOOR
        if (winA == 0 && pickA == 0)
        {
            elimA = 1;
        }
        else if (winB == 0 && pickB == 0)
        {
            elimB = 1;
        }
        else if (winC == 0 && pickC == 0)
        {
            elimC = 1;
        }
        else
        {
            cout << "AN ERROR OCCURRED 3";
            break;
        }

        //SWITCH OR NOT

        switcheroo = rand() % 2;

        switch (switcheroo)
        {
            case 1:
            {
            switches += 1;
                if (pickA == 1)
                {
                    if (elimB == 0)
                    {
                        pickA = 0;
                        pickB = 1;
                        picker = 2;
                    }
                    else if (elimC == 0)
                    {
                        pickA = 0;
                        pickC = 1;
                        picker = 3;
                    }
                    else
                    {
                        cout << "AN ERROR OCCURRED 4";
                    }
                }
                else if (pickB == 1)
                {
                    if (elimA == 0)
                    {
                        pickB = 0;
                        pickA = 1;
                        picker = 1;
                    }
                    else if (elimC == 0)
                    {
                        pickB = 0;
                        pickC = 1;
                        picker = 3;
                    }
                    else
                    {
                        cout << "AN ERROR OCCURRED 5";
                    }
                }
                else if (pickC == 1)
                {
                    if (elimA == 0)
                    {
                        pickC = 0;
                        pickA = 1;
                        picker = 1;
                    }
                    else if (elimB == 0)
                    {
                        pickC = 0;
                        pickB = 1;
                        picker = 2;
                    }
                    else
                    {
                        cout << "AN ERROR OCCURRED 6";
                    }
                }//END ELSEIF/SWITCH PICK

            }//END CASE 1
            break;
           case 0:
            {
                ;
            }//END CASE 0
            break;
        default:
        {
        cout << "AN ERROR OCCURRED 7";
        }
        }//END SWITCHEROO SWITCH

        //VALIDATE WIN AND SWITCH

        if (winner == 1 && picker == 1)
        {
            if (switcheroo == 0)
            {
                noswitchwin += 1;
            }
            else
            {
                switchwin += 1;
            }
        }
        else if (winner == 2 && picker == 2)
        {
            if (switcheroo == 0)
            {
                noswitchwin += 1;
            }
            else
            {
                switchwin += 1;
            }
        }
        else if (winner == 3 && picker == 3)
        {
            if (switcheroo == 0)
            {
                noswitchwin += 1;
            }
            else
            {
                switchwin += 1;
            }
        }
        else
        {
            lose += 1;
        }
        //END VALIDATE WIN SWITCH

        //RESET VARIABLES WITHIN LOOP
        switcheroo = 0;
        windoor = 0;
        pickdoor = 0;
        winner = 0;
        picker = 0;
        winA = 0;
        winB =0;
        winC = 0;
        pickA = 0;
        pickB = 0;
        pickC = 0;
        elimA = 0;
        elimB = 0;
        elimC = 0;
}
        //CALCULATE PROBABLILILITY
        yesprob = switchwin / switches;
        noprob = noswitchwin / (10000-switches);
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(4);
        cout << "Wins by switching:"
             << switchwin
             << "\nWins by not switching:"
             << noswitchwin
             << "\nConsolation prizes:"
             << lose
             << "\n";
        cout << "Probability if switched:"
             << yesprob
             << "\n"
             << " Probability without switching:"
             << noprob
             << "\n";

        cout << "Would you like to run the simulation again?(Y/N)\n";
        cin >> ans;

        //RESET VARIABLES OUTSIDE OF LOOP
        noswitchwin = 0;
        switchwin = 0;
        lose = 0;
        count = 0;
        switches = 0;


    } //END PLAY AGAIN LOOP

  return 0;
}
