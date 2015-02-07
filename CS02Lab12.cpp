//File Name: CS02Lab12.cpp
//Author: Yujia Huang, Adam Mejia
//Email: yhuang32@go.pasadena.edu, adamrooski@gmail.com
//Description: This program picks drafting order for fantasy football.
//Last Modified: 10/16/2014

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
using namespace std;

//THE BALLPICK FUNCTION RANDOMLY PICKS TEAMS AND CHECKS TO MAKE SURE THE TEAMS AREN'T PICKED MORE THAN ONCE
int ballpick();
int ballpick(int firstpick_par);
int ballpick(int firstpick_par, int secondpick_par);
int ballpick(int firstpick_par, int secondpick_par, int thirdpick_par);
//THE TEAMPICK FUNCTION OUTPUTS THE NAME OF THE TEAM BASED ON THE ORDER THEY WERE CHOSEN
string teampick(int ballpick_par, string team1_par, string team2_par, string team3_par, string team4_par);


int main()
{
    //INITIALIZE RANDOM SEED
    srand(time(0));

    //DECLARE VARIABLES
    char ans('y');
    int ball1, ball2, ball3, ball4;
    string team1, team2, team3, team4;



    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {


        cout << "Please enter the name of the last place team:";
        cin >> team1;
        cout << "\nPlease enter the name of the second-to-last place team:";
        cin >> team2;
        cout << "\nPlease enter the name of the third-to-last place team:";
        cin >> team3;
        cout << "\nPlease enter the name of the fourth-to-last place team:";
        cin >> team4;
        cout << "\n";



ball1 = ballpick();
ball2 = ballpick(ball1);
ball3 = ballpick(ball1, ball2);
ball4 = ballpick(ball1, ball2, ball3);

        cout << "The first pick goes to "
             << teampick(ball1, team1, team2, team3, team4);

        cout << "\nThe second pick goes to "
             << teampick(ball2, team1, team2, team3, team4);


        cout << "\nThe third pick goes to "
             << teampick(ball3, team1, team2, team3, team4);


        cout << "\nThe fourth pick goes to "
             << teampick(ball4, team1, team2, team3, team4);
        cout << "\n";

        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the simulation again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the simulation again?(Y/N)\n";
            cin >> ans;
        }

    }
    return 0;
}

//FUNCTION DEFINITIONS

int ballpick()
{
    int pick;
    pick = rand() % 40 + 1;
    if (pick < 21 && pick > 0)
        return 1;
    else if (pick > 20 && pick < 31)
        return 2;
    else if (pick > 30 && pick < 37)
        return 3;
    else if (pick > 36 && pick < 41)
        return 4;
    else
        return 9999999;
}

int ballpick(int firstpick_par)
{
    int pick, choice;
    do
    {
    pick = rand() % 40 + 1;
    if (pick < 21 && pick > 0)
    {choice = 1;
        }
    else if (pick > 20 && pick < 31)
    {choice = 2;
        }
    else if (pick > 30 && pick < 37)
    {choice = 3;
        }
    else if (pick > 36 && pick < 41)
    {choice = 4;
        }
    }while (choice == firstpick_par);
    return choice;
}

int ballpick(int firstpick_par, int secondpick_par)
{
    int pick, choice;
    do
    {
    pick = rand() % 40 + 1;
    if (pick < 21 && pick > 0)
    {choice = 1;
        }
    else if (pick > 20 && pick < 31)
    {choice = 2;
        }
    else if (pick > 30 && pick < 37)
    {choice = 3;
        }
    else if (pick > 36 && pick < 41)
    {choice = 4;
        }
    }while (choice == firstpick_par || choice == secondpick_par);
    return choice;
}

int ballpick(int firstpick_par, int secondpick_par, int thirdpick_par)
{
    int pick, choice;
    do
    {
    pick = rand() % 40 + 1;
    if (pick < 21 && pick > 0)
    {choice = 1;
        }
    else if (pick > 20 && pick < 31)
    {choice = 2;
        }
    else if (pick > 30 && pick < 37)
    {choice = 3;
        }
    else if (pick > 36 && pick < 41)
    {choice = 4;
        }
    }while (choice == firstpick_par || choice == secondpick_par || choice == thirdpick_par);
    return choice;
}

string teampick(int ballpick_par, string team1_par, string team2_par, string team3_par, string team4_par)
{
switch (ballpick_par)
{
case 1:
    return team1_par;
    break;
case 2:
    return team2_par;
    break;
case 3:
    return team3_par;
    break;
case 4:
    return team4_par;
    break;
default:
    return 0;
}

}


//TEST RUN
/*
 * Please enter the name of the last place team:a

Please enter the name of the second-to-last place team:b

Please enter the name of the third-to-last place team:c

Please enter the name of the fourth-to-last place team:d

The first pick goes to d
The second pick goes to c
The third pick goes to a
The fourth pick goes to b
Would you like to run the simulation again?(Y/N)
y
Please enter the name of the last place team:a

Please enter the name of the second-to-last place team:b

Please enter the name of the third-to-last place team:c

Please enter the name of the fourth-to-last place team:d

The first pick goes to c
The second pick goes to a
The third pick goes to d
The fourth pick goes to b
Would you like to run the simulation again?(Y/N)
n
Press <RETURN> to close this window...
*/
