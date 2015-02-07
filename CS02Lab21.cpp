//File Name: CS02Lab21.cpp
//Authors: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program takes a file consisting of rainfall data and converts it into a table and graph in the output file.
//Last Modified: 11/18/2014

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//DECLARE FUNCTIONS

void openStreams(ifstream & fin_par, ofstream & fout_par);
void closeStreams(ifstream & fin_par, ofstream & fout_par);
void copyText(ifstream & fin_par, ofstream & fout_par);


int main()//BEGIN MAIN
{


    //DECLARE VARIABLES AND OBJECTS
    char ans('y');
    ifstream fin;
    ofstream fout;

    //BEGIN PLAY AGAIN LOOP
    while(ans == 'y' || ans == 'Y')
    {
        openStreams(fin, fout);

        copyText(fin, fout);

        closeStreams(fin, fout);

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
void openStreams(ifstream & fin_par, ofstream & fout_par)
{
    string infile, outfile;
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

void closeStreams(ifstream & fin_par, ofstream & fout_par)
{
    fin_par.close();
    fout_par.close();
}



void copyText(ifstream & fin_par, ofstream & fout_par)
{
   string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   string foo[12];
   double actRF[12];
   double aveRF[12];
   double difRF[12];
   int count(0), i(0);

   fout_par << setw(10)
            << left
            << "Month";
   fout_par << setw(10)
            << left
            << "ActRF";
   fout_par << setw(10)
            << left
            << "+/- AveRF";
   fout_par << "\n";

   for(count = 0; count < 12; count++)//while (next != fin_par.eof)
   {
    fin_par >> foo[count];
    fout_par << setw(10)
             << left
             << month[count];
    fin_par >> actRF[count];
    fout_par << setw(10)
             << fixed
             << noshowpos
             << showpoint
             << setprecision(1)
             << actRF[count];
    fin_par >> aveRF[count];
    difRF[count] = actRF[count] - aveRF[count];
    fout_par << setw(10)
             << showpoint
             << showpos
             << setprecision(1)
             << difRF[count]
             << "\n";
   }
   for (count = 0; count < 12; count++)
   {
       fout_par << month[count]
                << "\n"
                << "Ave:";
       for (i = aveRF[count] * 10; i > 0; i--)
       {
           fout_par << "*";
       }
       fout_par << "\n"
                << "Act:";
       for (i = actRF[count] * 10; i > 0; i--)
       {
           fout_par << "*";
       }
       fout_par << "\n";
   }
}
