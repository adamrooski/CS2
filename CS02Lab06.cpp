//CS02Lab07.cpp
//Adam Mejia, Gabriela Didion
//adamrooski@gmail.com
//Assignment: Lab 06
//Description: This program gives a horoscope based on a users date of birth.
//Revised: 09/23/2014


#include <iostream>
using namespace std;
int main()
{

//DECLARE VARIABLES

    int date(0), month(0);
    enum month1 {january=1, february, march, april, may, june, july, august, september, october, november, december};
    char ans = 'y';

    //DO WHILE LOOP FOR PLAY AGAIN
    do
    {
        while (month < 1 || month > 12)
        {
        cout << "Please enter the number of the month you were born in (1-12):\n";
        cin >> month;
        }
        while (date < 1 || date >31)
        {
        cout << "Please enter the number of the day you were born on (1-31):\n";
        cin >> date;
        cout << "\n";
        }

        //SWITCH TO CHECK MONTHS
        switch (month)
        {
            case january:
            {
                if (date >=1 && date <=17)
                    cout << "Your zodiac sign is: Capricorn\n"
                         << "The stars say that you are going to fall asleep tonight.\n";
                else if (date >= 18 && date <= 21)
                {
                    cout << "Your zodiac sign is: Capricorn on the cusp of Aquarius\n"
                         << "The stars say that you are going to fall asleep tonight.\n"
                         << "The stars say that you are going to wake up tomorrow.\n";
                }
                else if (date >=22 && date <=31)
                {
                    cout << "Your zodiac sign is: Aquarius\n"
                         << "The stars say that you are going to wake up tomorrow.\n";
                }
            }
            break;
        case february:
        {
            if (date >=1 && date <=16)
                cout << "Your zodiac sign is: Aquarius\n"
                     << "The stars say that you are going to wake up tomorrow.\n";
            else if (date >= 17 && date <= 20)
            {
                cout << "Your zodiac sign is: Aquarius on the cusp of Pisces\n"
                     << "The stars say that you are going to wake up tomorrow.\n"
                     << "The stars say that you are going to fall asleep again.\n";
            }
            else if (date >=21 && date <=29)
            {
                cout << "Your zodiac sign is: Pisces\n"
                     << "The stars say that you are going to fall asleep again.\n";
            }
        }
        break;
        case march:
        {
            if (date >=1 && date <=18)
                cout << "Your zodiac sign is: Pisces\n"
                     << "The stars say that you are going to fall asleep again.\n";
            else if (date >= 19 && date <= 22)
            {
                cout << "Your zodiac sign is: Pisces on the cusp of Aries\n"
                     << "The stars say that you are going to fall asleep again.\n"
                     << "The stars say that you are going to drink some water.\n";
            }
            else if (date >=23 && date <=31)
            {
                cout << "Your zodiac sign is: Aries\n"
                     << "The stars say that you are going to drink some water.\n";
            }
        }
        break;
        case april:
        {
            if (date >=1 && date <=17)
                cout << "Your zodiac sign is: Aries\n"
                     << "The stars say that you are going to drink some water.\n";
            else if (date >= 18 && date <= 21)
            {
                cout << "Your zodiac sign is: Aries on the cusp of Taurus\n"
                     << "The stars say that you are going to drink some water.\n"
                     << "The stars say that you are going to have to pee.\n";
            }
            else if (date >=22 && date <=30)
            {
                cout << "Your zodiac sign is: Taurus\n"
                     << "The stars say that you are going to have to pee.\n";
            }
        }
        break;
        case may:
        {
            if (date >=1 && date <=18)
                cout << "Your zodiac sign is: Taurus\n"
                     << "The stars say that you are going to have to pee.\n";
            else if (date >= 19 && date <= 22)
            {
                cout << "Your zodiac sign is: Taurus on the cusp of Gemini\n"
                     << "The stars say that you are going to have to pee.\n"
                     << "The stars say that you are going to have a snack.\n";
            }
            else if (date >=23 && date <=31)
            {
                cout << "Your zodiac sign is: Gemini\n"
                     << "The stars say that you are going to have a snack.\n";
            }
        }
        break;
        case june:
        {
            if (date >=1 && date <=19)
                cout << "Your zodiac sign is: Gemini\n"
                     << "The stars say that you are going to have a snack.\n";
            else if (date >= 20 && date <= 23)
            {
                cout << "Your zodiac sign is: Gemini on the cusp of Cancer\n"
                     << "The stars say that you are going to have a snack.\n"
                     << "The stars say that you are going to walk a little bit.\n";
            }
            else if (date >=24 && date <=30)
            {
                cout << "Your zodiac sign is: Cancer\n"
                     << "The stars say that you are going to walk a little bit.\n";
            }
        }
        break;
        case july:
        {
            if (date >=1 && date <=20)
                cout << "Your zodiac sign is: Cancer\n"
                     << "The stars say that you are going to walk a little bit.\n";
            else if (date >= 21 && date <= 24)
            {
                cout << "Your zodiac sign is: Cancer on the cusp of Leo\n"
                     << "The stars say that you are going to walk a little bit.\n"
                     << "The stars say that you are going to sit for a while.\n";
            }
            else if (date >=25 && date <=31)
            {
                cout << "Your zodiac sign is: Leo\n"
                     << "The stars say that you are going to sit for a while.\n";
            }
        }
        break;
        case august:
        {
            if (date >=1 && date <=20)
                cout << "Your zodiac sign is: Leo\n"
                     << "The stars say that you are going to sit for a while.\n";
            else if (date >= 21 && date <= 24)
            {
                cout << "Your zodiac sign is: Leo on the cusp of Virgo\n"
                     << "The stars say that you are going to sit for a while.\n"
                     << "The stars say that you are going to stand for a while.\n";
            }
            else if (date >=25 && date <=31)
            {
                cout << "Your zodiac sign is: Virgo\n"
                     << "The stars say that you are going to stand for a while.\n";
            }
        }
        break;
        case september:
        {
            if (date >=1 && date <=20)
                cout << "Your zodiac sign is: Virgo\n"
                     << "The stars say that you are going to stand for a while.\n";
            else if (date >= 21 && date <= 24)
            {
                cout << "Your zodiac sign is: Virgo on the cusp of Libra\n"
                     << "The stars say that you are going to stand for a while.\n"
                     << "The stars say that you are going to do some blinking.\n";
            }
            else if (date >=25 && date <=30)
            {
                cout << "Your zodiac sign is: Libra\n"
                     << "The stars say that you are going to do some blinking.\n";
            }
        }
        break;
        case october:
        {
            if (date >=1 && date <=20)
                cout << "Your zodiac sign is: Libra\n"
                     << "The stars say that you are going to do some blinking.\n";
            else if (date >= 21 && date <= 24)
            {
                cout << "Your zodiac sign is: Libra on the cusp of Scorpio\n"
                     << "The stars say that you are going to do some blinking.\n"
                     << "The stars say that you are going to do some thinking.\n";
            }
            else if (date >=25 && date <=31)
            {
                cout << "Your zodiac sign is: Scorpio\n"
                     << "The stars say that you are going to do some thinking.\n";
            }
        }
        break;
        case november:
        {
            if (date >=1 && date <=19)
                cout << "Your zodiac sign is: Scorpio\n"
                     << "The stars say that you are going to do some thinking.\n";
            else if (date >= 20 && date <= 23)
            {
                cout << "Your zodiac sign is: Scorpio on the cusp of Sagittarius\n"
                     << "The stars say that you are going to do some thinking.\n"
                     << "The stars say that you are going to remember something that you forgot.\n";
            }
            else if (date >=24 && date <=30)
            {
                cout << "Your zodiac sign is: Saggitarius\n"
                     << "The stars say that you are going to remember something that you forgot.\n";
            }
        }
        break;
        case december:
        {
            if (date >=1 && date <=19)
                cout << "Your zodiac sign is: Sagittarius\n"
                     << "The stars say that you are going to remember something that you forgot.\n";
            else if (date >= 20 && date <= 23)
            {
                cout << "Your zodiac sign is: Sagittarius on the cusp of Capricorn\n"
                     << "The stars say that you are going to remember something that you forgot.\n"
                     << "The stars say that you are going to fall asleep tonight.\n";
            }
            else if (date >=24 && date <=31)
            {
                cout << "Your zodiac sign is: Capricorn\n"
                     << "The stars say that you are going to fall asleep tonight.\n";
            }
        }
        break;
        default:
        {
            cout << "You managed to break my program. Congratulations\n";
        }
        }


        cout << "Would you like to play again? (Y or N)\n";
        cin >> ans;
        //RESET MONTH AND DATE
        month = 0;
        date = 0;
    }
    while (ans == 'y' || ans == 'Y');
    cout << "Good Bye\n";
    return 0;
}


