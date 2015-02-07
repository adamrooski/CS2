//YEARTOROMANNUMERAL.cpp
//Adam Mejia
//adamrooski@gmail.com
//Assignment: Pg.175 #3
//Description: This converts a year between 1000-3000 to roman numerals...the long way.
//Revised: 09/25/2014

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    //DECLARE VARIABLES

    int year(0);
    char ans = 'y';
    string romnum = "";

    //BEGIN PLAY AGAIN LOOP

    do
    {

    //INPUT
    cout << "Please enter the year to be converted (between 1000 and 3000):\n";
    cin >> year;

    //BEGIN CONVERSION

    //1000 - 1999
    if (year >= 1000 && year <= 1999)
    {
        romnum.append("M");
        year = year - 1000;
            if (year >= 0 && year <=99)
            {
                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 100 && year <= 199)
            {
                romnum.append("C");
                year = year - 100;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            //END 0-199
            else if (year >= 200 && year <= 299)
            {
                romnum.append("CC");
                year = year - 200;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 300 && year <= 399)
            {
                romnum.append("CCC");
                year = year - 300;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 400 && year <= 499)
            {
                romnum.append("CD");
                year = year - 400;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 500 && year <= 599)
            {
                romnum.append("D");
                year = year - 500;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 600 && year <= 699)
            {
                romnum.append("DC");
                year = year - 600;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 700 && year <= 799)
            {
                romnum.append("DCC");
                year = year - 700;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 800 && year <= 899)
            {
                romnum.append("DCCC");
                year = year - 800;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 900 && year <= 999)
            {
                romnum.append("CM");
                year = year - 900;

                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            //END 0-999
    }
    //END 0-1000
    else if (year >= 2000 && year <= 2999 )
    {
        romnum.append("MM");
        year = year - 2000;
            if (year >= 0 && year <=99)
            {
                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 100 && year <= 199)
            {
                romnum.append("C");
                year = year - 100;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            //END 0-199
            else if (year >= 200 && year <= 299)
            {
                romnum.append("CC");
                year = year - 200;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 300 && year <= 399)
            {
                romnum.append("CCC");
                year = year - 300;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 400 && year <= 499)
            {
                romnum.append("CD");
                year = year - 400;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 500 && year <= 599)
            {
                romnum.append("D");
                year = year - 500;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 600 && year <= 699)
            {
                romnum.append("DC");
                year = year - 600;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 700 && year <= 799)
            {
                romnum.append("DCC");
                year = year - 700;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 800 && year <= 899)
            {
                romnum.append("DCCC");
                year = year - 800;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 900 && year <= 999)
            {
                romnum.append("CM");
                year = year - 900;

                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            //END 0-999
    }
    else if (year == 3000)
    {
        romnum.append("MMM");
        year = year - 1000;
            if (year >= 0 && year <=99)
            {
                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 100 && year <= 199)
            {
                romnum.append("C");
                year = year - 100;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            //END 0-199
            else if (year >= 200 && year <= 299)
            {
                romnum.append("CC");
                year = year - 200;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 300 && year <= 399)
            {
                romnum.append("CCC");
                year = year - 300;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 400 && year <= 499)
            {
                romnum.append("CD");
                year = year - 400;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 500 && year <= 599)
            {
                romnum.append("D");
                year = year - 500;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 600 && year <= 699)
            {
                romnum.append("DC");
                year = year - 600;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 700 && year <= 799)
            {
                romnum.append("DCC");
                year = year - 700;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 800 && year <= 899)
            {
                romnum.append("DCCC");
                year = year - 800;
                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            else if (year >= 900 && year <= 999)
            {
                romnum.append("CM");
                year = year - 900;

                //BEGIN 0 - 99

                if (year >= 0 && year <= 9)
                {
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }
                }
                else if (year >= 10 && year <= 19)
                {
                 romnum.append("X");
                 year = year - 10;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 20 && year <= 29)
                {
                 romnum.append("XX");
                 year = year - 20;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 30 && year <= 39)
                {
                 romnum.append("XXX");
                 year = year - 30;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 40 && year <= 49)
                {
                 romnum.append("XL");
                 year = year - 40;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 50 && year <= 59)
                {
                 romnum.append("L");
                 year = year - 50;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 60 && year <= 69)
                {
                 romnum.append("LX");
                 year = year - 60;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 70 && year <= 79)
                {
                 romnum.append("LXX");
                 year = year - 70;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 80 && year <= 89)
                {
                 romnum.append("LXXX");
                 year = year - 80;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                else if (year >= 90 && year <= 99)
                {
                 romnum.append("XC");
                 year = year - 90;
                    if (year == 1)
                    {
                        romnum.append("I");
                    }
                    else if (year == 2)
                    {
                        romnum.append("II");
                    }
                    else if (year == 3)
                    {
                        romnum.append("III");
                    }
                    else if (year == 4)
                    {
                        romnum.append("IV");
                    }
                    else if (year == 5)
                    {
                        romnum.append("V");
                    }
                    else if (year == 6)
                    {
                        romnum.append("VI");
                    }
                    else if (year == 7)
                    {
                        romnum.append("VII");
                    }
                    else if (year == 8)
                    {
                        romnum.append("VIII");
                    }
                    else if (year == 9)
                    {
                        romnum.append("IX");
                    }

                }
                //END 0-99
            }
            //END 0-999

    }

    //OUTPUT ROMNUM
    cout << romnum;

    //RESET VARIABLES
    romnum = "";

    cout << "\nWould you like to play again? (Y/N)";
    cin >> ans;

    }while (ans == 'y' || ans == 'Y');
  return 0;
}
