//File Name: SphereXYZ2.cpp
//Authors: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program generates the necesarry data to plot a sphere of radius = 1 using X,Y,Z cartesian coordinates.
//Last Modified: 11/06/2014

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//DECLARE FUNCTIONS

void openStream(ofstream & fout_par);
void closeStream(ofstream & fout_par);
void writeData(ofstream & fout_par);


int main()//BEGIN MAIN
{


    //DECLARE VARIABLES AND OBJECTS
    char ans('y');
    ofstream fout;

    //BEGIN PLAY AGAIN LOOP
    while(ans == 'y' || ans == 'Y')
    {
        openStream(fout);
        writeData(fout);
        closeStream(fout);

        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the program again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the program again?(Y/N)\n";
            cin >> ans;
        }

    }//END PLAY AGAIN LOOP
    return 0;
}//END MAIN

//FUNCTION DEFINITIONS
void openStream(ofstream & fout_par)
{
    string outfile;
    cout << "\nPlease enter the name of your output file:\n";
    cin >> outfile;

 fout_par.open(outfile);
 if(fout_par.fail())
 {
     cout << "\nFailed to open output file.";
     exit(1);
 }
}

void closeStream(ofstream & fout_par)
{
    fout_par.close();
}

void writeData(ofstream & fout_par)
{
    double i(0), j(0);
    const double pi(3.14159);
    fout_par << "X,Y,Z\n";
    for(i = 0; i <= pi+((2*pi)/360); i+=(2*pi)/360) //THETA (0 to PI radians)
        {
            for (j= -pi/2; j <= (pi/2)+((2*pi)/360); j+=(2*pi)/360)  //PHI (0 to PI radians)
            {
                fout_par << sin(j)*cos(i)
                         << ","
                         << sin(j)*sin(i)
                         << ","
                         << cos(j)
                         << "\n";
            }
        }
}

