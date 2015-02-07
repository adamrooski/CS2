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
void openFileStreams(ifstream & fin_par, ofstream & fout_par);
void openKbStream(ofstream & fout_par);
void closeFileStreams(ifstream & fin_par, ofstream & fout_par);
void closeKbStream(ofstream & fout_par);
void requestElements(int & numUsed_par);
void sort(int number[], int numUsed_par);
int index_of_smallest(const int numbers[], int start_index, int numUsed_par);
void kbOrFile(int & decision_par);
int main()//BEGIN MAIN
{
//DECLARE VARIABLES AND OBJECTS
char ans('y');
int decision(0);
int numUsed(0);
ifstream fin;
ofstream fout;
//BEGIN PLAY AGAIN LOOP
while(ans == 'y' || ans == 'Y')
{
requestElements();
/*
kbOrFile(decision);
if (decision == 1)
{
openKbStream(fout);
}
else if (decision == 2)
{
openFileStreams(fin, fout);
}
else
{
cout << "An error occurred";
return -1;
}
*/
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
void openFileStreams(ifstream & fin_par, ofstream & fout_par)
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
void closeFileStreams(ifstream & fin_par, ofstream & fout_par)
{
fin_par.close();
fout_par.close();
}
void kbOrFile(int & decision_par)
{
cout << "Press 1 to use the keyboard for input.\nPress 2 to specify a file.\nPlease enter 1 or 2:";
cin >> decision_par;
while (decision_par != 1 && decision_par
!= 2)
{
cout << "\nI'm sorry I don't understand.\nPress 1 to use the keyboard for input.\nPress 2 to specify a file.\nPlease enter 1 or 2:";
cin >> decision_par;
}
}
void openKbStream(ofstream & fout_par)
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
void closeKbStream(ofstream & fout_par)
{
fout_par.close();
}
void requestElements(int & numUsed_par)
{
int numbers[50], temp[50], count(0), i(0);
int number = 0;
cout << "Please enter up to 50 integers.\nPress enter after each integer\nEnter -999 when you are finished and press enter:\n";
while (number != -999 || count < 50 )
{
cin >> number;
numbers[count++]= number;
}
numUsed_par = count--;
}
void sort(int number[], int numUsed_par)
{
int index_next_smallest, i(0);
for(int i = 0; i < numUsed_par-1; i++)
{
index_next_smallest =
}
}
