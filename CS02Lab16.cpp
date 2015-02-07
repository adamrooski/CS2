//File Name: CS2Lab16.cpp
//Authors: Yujia Huang, Adam Mejia
//Emails: freya.huang@yahoo.com, adamrooski@gmail.com
//Description: This Program is to get the minimum and maximum numbers in a file.
//Last Change: October 30, 2014

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <climits>
using namespace std;

//THIS FUNCTION CREATES A FILE CONTAINING 100 RANDOM NUMBERS BETWEEN 0 AND INT_MAX
void makeFile();
//THIS FUNCTION READS THE FILE AND FINDS MAXIMUM AND MINIMUM VALUES
void readFile(int& maximum_par, int& minimum_par);


int main()
{
    //DECLARE VARIABLES
    int maximum(0), minimum(INT_MAX);

    srand(time(0));
    makeFile();
    readFile(maximum, minimum);
    cout << "The maximum number in the file is: " << maximum;
     cout << "\nThe minimum number in the file is: " << minimum << endl;
    return 0;
}

void makeFile()
{
ofstream out_stream;
out_stream.open("numFile.txt");
if(out_stream.fail())
{
    cout << "Output fail.";
    exit(1);
}
for(int i = 0; i < 100; i ++)
   {
    out_stream << rand() << endl;
   }
out_stream.close();
}

void readFile(int& maximum_par, int& minimum_par)
{
    ifstream in_stream;
    int number;
    in_stream.open("numFile.txt");
    if(in_stream.fail())
    {
        cout << "Input fail.";
        exit(1);
    }
    while(in_stream >> number)
    {
      if(number > maximum_par)
          maximum_par = number;
      if(number < minimum_par)
          minimum_par = number;
    }
    in_stream.close();
}

/*Sample Output:
The maximum number in the file is: 32624
The minimum number in the file is: 47
Press <RETURN> to close this window...
The maximum number in the file is: 32724
The minimum number in the file is: 377
Press <RETURN> to close this window...
*/
