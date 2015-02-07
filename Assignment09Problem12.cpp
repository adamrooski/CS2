//Assignment09Problem12.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: Pg.178 #12
//Description: This program lets the user pick up toothpicks.
//Revised: 09/29/2014

#include <iostream>
using namespace std;

int main ()
{
    //DECLARE VARIABLES
    int tp (23), player(0), cpu(0), winlose(0);
    char ans = 'y';


    while(ans == 'y' || ans == 'Y')
    {
        //REQUEST INPUTS
        while  (tp > 0)
        {
            cout << tp
                 << " toothpicks in your milkshake,\n";

            while (player < 1 || player > 3)
            {
                cout <<  "how many toothpicks will you take? (Take 1, 2 or 3 ONLY)\n";
                cin >> player;
            }
            tp -= player;

            cout << tp
                 << " toothpicks in your milkshake.\n";
            if (tp > 4)
            {
                cpu = 4 - player;
                cout << "The monkey has a sip of your milkshake\n";
                tp -= cpu;
            }
            else if (tp <= 4 && tp >= 2)
            {
                cpu = tp - 1;
                cout << "The monkey looks green.\nHe takes a little sip.\n";
                tp -= cpu;
            }
            else if (tp == 1)
            {
                tp -= 1;
                cout << "The monkey quietly takes the last toothpick.\nA Winner Is You!\n";
                winlose = 1;
            }

            player = 0;

        }
        if ( tp == 0 && winlose == 0 )
        {
            cout << "Fool! You took the last toothpick.\nYOU ARE LOST\n";
        }
        else if (tp < 0)
        {
            cout << "Why would you take that many?\nWhat's wrong with you!?\nYou Lose Sir\n";
        }
        cout << "GAME OVER\n";
        //RESET VARIABLES
        tp = 23;
        winlose = 0;
        //PLAY IT AGAIN
        cout << "Would you like to play again?(Y/N)\n";
        cin >> ans;
    }
  return 0;
}
