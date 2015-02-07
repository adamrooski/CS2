//File Name: Assignment13Problem09.cpp
//Author: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program calculates area and perimeter of a trigon.
//Last Modified: 10/28/2014

#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS

//REQUESTS INPUTS
void getinputs(float & sideA_par, float & sideB_par, float & sideC_par);

//CALCULATE AREA AND PERIMETER
void teamExtremeGo(float sideA_par, float sideB_par, float sideC_par, float & area_par, float & perim_par);

//OUTPUT AREA AND PERIMETER
void donkeyKongCountry(float area_par, float perim_par);

//MAIN PROGRAM
int main()
{

    //DECLARE VARIABLES   
    char ans('y');
    float sideA(0), sideB(0), sideC(0), area, perim;

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {        

        getinputs(sideA, sideB, sideC);
        teamExtremeGo(sideA, sideB, sideC, area, perim);
        donkeyKongCountry(area, perim);

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
void getinputs(float & sideA_par, float & sideB_par, float & sideC_par)
{
    cout << "Please input the length of side A:";
    cin >> sideA_par;
    cout << "\nPlease input the length of side B:";
    cin >> sideB_par;
    cout << "\nPlease input the length of side C:";
    cin >> sideC_par;
    while (sideC_par > (sideA_par + sideB_par))
    {
        cout << "I'm sorry but your trigon defies the laws of the universe.\nPlease choose a side length less than or equal to "
             << (sideA_par + sideB_par)
             << ":";
        cin >> sideC_par;
    }
    while (sideB_par > (sideA_par + sideC_par))
    {
        cout << "I'm sorry but your trigon defies the laws of the universe.\nPlease choose a side length less than or equal to "
             << (sideA_par + sideC_par)
             << ":";
        cin >> sideB_par;
    }
    while (sideA_par > (sideC_par + sideB_par))
    {
        cout << "I'm sorry but your trigon defies the laws of the universe.\nPlease choose a side length less than or equal to "
             << (sideC_par + sideB_par)
             << ":";
        cin >> sideA_par;
    }
}

void teamExtremeGo(float sideA_par, float sideB_par, float sideC_par, float & area_par, float & perim_par)
{
    float s(0);
    perim_par = sideA_par + sideB_par + sideC_par;
    s = (sideA_par + sideB_par + sideC_par)/2;
    area_par = sqrt(s*(s-sideA_par)*(s-sideB_par)*(s-sideC_par));
}

void donkeyKongCountry(float area_par, float perim_par)
{
    cout << "The area of your triangle is "
         << area_par
         << " The perimeter of your triangle is "
         << perim_par
         << "\n";
    if (area_par == 0)
    {
        cout << "Your triangle isn't even a triangle!\nIt's like, a line or something!\nWhat have you done!?\n";
    }
}

/*TEST RUN
Please input the length of side A:3

Please input the length of side B:4

Please input the length of side C:5
The area of your triangle is 6 The perimeter of your triangle is 12
Would you like to run the calculation again?(Y/N)

y
Please input the length of side A:3

Please input the length of side B:3

Please input the length of side C:7
I'm sorry but your trigon defies the laws of the universe.
Please choose a side length less than or equal to 6:5
The area of your triangle is 4.14578 The perimeter of your triangle is 11
Would you like to run the calculation again?(Y/N)
y
Please input the length of side A:7

Please input the length of side B:3

Please input the length of side C:3
I'm sorry but your trigon defies the laws of the universe.
Please choose a side length less than or equal to 6:4
The area of your triangle is 4.47214 The perimeter of your triangle is 10
Would you like to run the calculation again?(Y/N)
y
Please input the length of side A:4

Please input the length of side B:9

Please input the length of side C:4
I'm sorry but your trigon defies the laws of the universe.
Please choose a side length less than or equal to 8:8
The area of your triangle is 0 The perimeter of your triangle is 16
Your triangle isn't even a triangle!
It's like, a line or something!
What have you done!?
Would you like to run the calculation again?(Y/N)
n
Press <RETURN> to close this window...
*/
