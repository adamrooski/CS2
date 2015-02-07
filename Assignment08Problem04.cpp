//Assignment08Problem04.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment 08 Problem 04
//Description: Blackjack hand calculator
//Revised: 09/23/2014


#include <iostream>
using namespace std;
int main()
{

//DECLARE VARIABLES

    int numCards(0), num(0), sum(0);
    char ans = 'y';

    do{
        while (numCards < 2 || numCards > 5)
        {
            cout << "Please enter the number of cards you have:\n";
            cin >> numCards;
            cout << "\n";
        }
    //LOOP TO PROCESS AND DISPLAY NUMBER OF CARDS
    for(num = numCards; num > 0; num--)
        {
        //LOCAL  CARDFACE VARIABLE
        char cardFace;

        //REQUEST CARD VALUES
        cout << "Please enter the face value\n(2-9, T, A, J ,Q, K)\nof card #"
             << num
             << ":\n";
        cin >> cardFace;

        //THE OL' SWITCHEROO
        switch (cardFace)
        {
            case '2':
            {
            sum += 2;
            }
            break;
            case '3':
            {
            sum += 3;
            }
            break;
            case '4':
            {
            sum += 4;
            }
            break;
            case '5':
            {
            sum += 5;
            }
            break;
            case '6':
            {
            sum += 6;
            }
            break;
            case '7':
            {
            sum += 7;
            }
            break;
            case '8':
            {
            sum += 8;
            }
            break;
            case '9':
            {
            sum += 9;
            }
            break;
            case 't':
            case 'T':
            case 'j':
            case 'J':
            case 'q':
            case 'Q':
            case 'k':
            case 'K':
                {
                sum += 10;
                }
                break;
            case 'a':
            case 'A':
                {
                    if (sum <= 10)
                    {
                        sum += 11;
                    }
                    else
                    {
                        sum += 1;
                    }
                 }
                    break;
            default :
                    {
                        cout << "I'm sorry but I don't understand\n";
                        return 0;
                    }
        }
    }
    if (sum <= 21)
    {
        cout << sum
             << "!\n";
    }
    else
    {
        cout << "BUSTED\n";
    }
    //RESET SUM, NUMCARDS AND COUNTER
    sum = 0;
    num = 0;
    numCards = 0;
    cout << "Would you like to calculate again? (Y or N)\n";
    cin >> ans;
    }
    while (ans == 'y' || ans == 'Y');

    return 0;
}
