//File Name: Assignment15Problem05.cpp
//Authors: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program takes a text file, finds instances of cin << and cout >> and corrects them.
//Last Modified: 11/06/2014

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//DECLARE FUNCTIONS

void openStream(ifstream & fin_par, ofstream & fout_par);
void closeStream(ifstream & fin_par, ofstream & fout_par);
void writeData(ifstream & fin_par, ofstream & fout_par);


int main()//BEGIN MAIN
{


    //DECLARE VARIABLES AND OBJECTS
    char ans('y');
    ifstream fin;
    ofstream fout;

    //BEGIN PLAY AGAIN LOOP
    while(ans == 'y' || ans == 'Y')
    {
        openStream(fin, fout);
        writeData(fout);
        closeStream(fin, fout);

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
void openStream(ifstream & fin_par, ofstream & fout_par)
{
    string outfile, infile;
    cout << "\nPlease enter the name of your input file:\n";
    cin >> infile;
    cout << "\nPlease enter the name of your output file:\n";
    cin >> outfile;

    fin_par.open(infile);
    if(fin_par.fail())
    {
        cout << "\nFailed to open input file.";
        exit(1);
    }

 fout_par.open(outfile);
 if(fout_par.fail())
 {
     cout << "\nFailed to open output file.";
     exit(1);
 }
}

void closeStream(ifstream & fin_par, ofstream & fout_par)
{
    fin_par.close();
    fout_par.close();
}

void writeData(ifstream & fin_par, ofstream & fout_par)
{
double red(0),green(0),blue(0),temp(0);
int count(0);
for (count = 0; count <= 32400; count++)
{
    getline(fin_par,temp)
}
}

