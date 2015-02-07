//File Name: Assignment11Exercise06.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program will take your money and give you twinkies and change.
//Last Modified: 10/12/2014

#include <iostream>
#include <string>
using namespace std;

int cashier(string coin_par);

int main()
{
    //DECLARE VARIABLES
    char ans('y');
    int paid(0);
    double change(0);
    string coin;

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {
        cout << "Want a twinkie?\n";

        while (paid < 350)
        {
            cout << "Insert your coin (dollar, quarter, dime, nickel)\n";
            cin >> coin;
            while (coin != "dollar" && coin != "quarter" && coin != "dime" && coin != "nickel")
            {
                cout << "\nI'm sorry I don't understand.\nPlease enter dollar, quarter, dime, or nickel.\n";
                cin >> coin;
            }

            paid += cashier(coin);

        }
        cout << "Thankyou, enjoy your twinkie!\n";
        if (paid > 350)
        {
            change = .01*(static_cast<double>(paid) - 350);
            std::cout.precision(2);
            std::cout << std::fixed;
            cout << "Your change is:$"
                 << change
                 << endl;
        }
        paid = 0;

        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the calculations again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the calculations again?(Y/N)\n";
            cin >> ans;
        }

    }
    return 0;
}

int cashier(string coin_par)
{
    if (coin_par == "dollar")
        return 100;
    else if  (coin_par == "quarter")
        return 25;
    else if  (coin_par == "dime")
        return 10;
    else if (coin_par == "nickel")
        return 5;
    else
        cout << "AN ERROR OCCURRED";
        return 0;
}

/*
Want a twinkie?
Insert your coin (dollar, quarter, dime, nickel)
dollar
Insert your coin (dollar, quarter, dime, nickel)
dollar
Insert your coin (dollar, quarter, dime, nickel)
doll

I'm sorry I don't understand.
Please enter dollar, quarter, dime, or nickel.
dollar
Insert your coin (dollar, quarter, dime, nickel)
dollar
Thankyou, enjoy your twinkie!
Your change is:$0.50
Would you like to run the calculations again?(Y/N)
n
Press <RETURN> to close this window...
*/
