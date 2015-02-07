//File Name: Assignment14Problem04.cpp
//Authors: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program calculates the average and standard deviation of a set of numbers.
//Last Modified: 11/03/2014

#include <iostream>
#include <fstream>

using namespace std;

//THIS FUNCTION CREATES A FILE CONTAINING 5 NUMBERS OF TYPE DOUBLE
void makeFile();
//THIS FUNCTION READS THE FILE AND FINDS AVERAGE AND STANDARD DEVIATION
void readFile(int & nvalue_par, double & sum_par, double & ave_par, double & stdev_par);

int main()
{


    //DECLARE VARIABLES
    char ans('y');
    int nvalue(0);
    double sum(0), ave(0), stdev(0);

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {

    makeFile();
    readFile(nvalue, sum, ave, stdev);
    cout << "average:"
         << ave
         << "\nstandard deviation:"
         << stdev
         << "\n";

    //RESET VARIABLES
    nvalue = 0;
    sum = 0;
    ave = 0;
    stdev = 0;
        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the comparison again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the simulation again?(Y/N)\n";
            cin >> ans;
        }

    }
    return 0;
}

void makeFile()
{
ofstream out_stream;
out_stream.open("numFile.txt");
if(out_stream.fail())
{
    cout << "Failed to open file.";
    exit(1);
}

    out_stream << 1.0
               << "\n"
               << 1.25
               << "\n"
               << 1.5
               << "\n"
               << 1.75
               << "\n"
               << 2.0;

    out_stream.close();
}

void readFile(int & nvalue_par, double & sum_par, double & ave_par, double & stdev_par)
{
    ifstream in_stream;
    int count(0);
    double number(0), num1(0);
    in_stream.open("numFile.txt");
    if(in_stream.fail())
    {
        cout << "Failed to open file.";
        exit(1);
    }
    while(in_stream >> number)
    {
        sum_par += number ;
        count += 1;
    }
    in_stream.close();

    nvalue_par = count;
    ave_par = sum_par / nvalue_par;

    in_stream.open("numFile.txt");

    if(in_stream.fail())
    {
        cout << "Failed to open file.";
        exit(1);
    }
    while(in_stream >> number)
    {
        num1 =+ pow((number - ave_par), 2);
    }
    in_stream.close();
    stdev_par = sqrt(num1 / nvalue_par);

}

/*TEST RUN

*/
