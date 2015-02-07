//File Name: Assignment12Problem07.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program tells you what day of the week occurs on a given date.
//Last Modified: 10/22/2014

#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS

bool isLeapYear(int year_par);

int getCenturyValue(int year_par);

int getYearValue(int year_par);

int getMonthValue(int month_par, int year_par);

void getInput(int&day_par, int&month_par, int&year_par);

int dayOfWeek (int day_par, int month_par, int year_par);

void intToDay (int dayOfWeek_par);

//MAIN PROGRAM
int main()
{

    //DECLARE VARIABLES
    int month(0), day(0), year(0);
    char ans('y');

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {

    getInput(day, month, year);
    intToDay(dayOfWeek(day,month,year));

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

//isLeapYear function
bool isLeapYear(int year_par)
{
if (year_par % 400 == 0)
    return true;
else if (year_par % 4 == 0 && year_par % 100 != 0)
    return true;
else
    return false;
}

//getCenturyValue function
int getCenturyValue(int year_par)
{
    return 2*(3-((year_par / 100) % 4));
}

//getYearValue function
int getYearValue(int year_par)
{
    int someval;
    someval = (year_par % 100);
    return ((someval / 4) + someval);
}

//getMonthValue function
int getMonthValue(int month_par, int year_par)
{
    switch(month_par)
    {
    case 1:
    {
        if (isLeapYear(year_par))
        {
            return 6;
        }
        else
        {
            return 0;
        }
        break;
    }
    case 2:
    {
        if (isLeapYear(year_par))
        {
            return 2;
        }
        else
        {
            return 3;
        }
        break;
    }
    case 3:
        return 3;
        break;
    case 4:
        return 6;
        break;
    case 5:
        return 1;
        break;
    case 6:
        return 4;
        break;
    case 7:
        return 6;
        break;
    case 8:
        return 2;
        break;
    case 9:
        return 5;
        break;
    case 10:
        return 0;
        break;
    case 11:
        return 3;
        break;
    case 12:
        return 5;
        break;
    default:
        return -1;

    }
}
//getInput function
void getInput(int&day_par, int&month_par, int&year_par)
{
    cout << "\nPlease enter the month (1-12):";
    cin >> month_par;
    cout << "\nPlease enter the day of the month (1-31):";
    cin >> day_par;
    cout << "\nPlease enter the year A.D.:";
    cin >> year_par;
    cout << "\n";
}

int dayOfWeek (int day_par, int month_par, int year_par)
{
    return (day_par + getMonthValue(month_par, year_par) + getYearValue(year_par) + getCenturyValue(year_par)) % 7;
}

void intToDay (int dayOfWeek_par)
{
    switch (dayOfWeek_par)
    {
    case 0:
        cout << "\nIt's Sunday!\n";
        break;
    case 1:
        cout << "\nIt's Monday!\n";
        break;
    case 2:
        cout << "\nIt's Tuesday!\n";
        break;
    case 3:
        cout << "\nIt's Wednesday!\n";
        break;
    case 4:
        cout << "\nIt's Thursday!\n";
        break;
    case 5:
        cout << "\nIt's Friday!\n";
        break;
    case 6:
        cout << "\nIt's Saturday!\n";
        break;
    default:
        cout << "\nIt's Someday!\n";
    }
}

/* TEST RUN
Please enter the month (1-12):10

Please enter the day of the month (1-31):21

Please enter the year A.D.:2014


It's Tuesday!
Would you like to run the calculation again?(Y/N)
y

Please enter the month (1-12):10

Please enter the day of the month (1-31):22

Please enter the year A.D.:2014


It's Wednesday!
Would you like to run the calculation again?(Y/N)
y

Please enter the month (1-12):10

Please enter the day of the month (1-31):23

Please enter the year A.D.:2014


It's Thursday!
Would you like to run the calculation again?(Y/N)
*/
