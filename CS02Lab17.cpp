//File Name: Lab17.cpp
//Author: Yujia Huang, Adam Mejia
//Description: Program to compute the average of students' test scores
//Last Change: November 04, 2014

#include <iostream>
#include <fstream>
using namespace std;
void readFile(ifstream& infile, ofstream& outfile);
int main()
{
    ifstream infile;
    ofstream outfile;
    infile.open("gradebook.txt");
    if(infile.fail())
    {
        cout << "Fail to open file A.";
        exit(1);
    }
    outfile.open("newgradebook.txt");
    if(outfile.fail())
    {
        cout << "Fail to open file B.";
        exit(1);
    }
    readFile(infile, outfile);
    infile.close();
    outfile.close();
    return 0;
}

void readFile(ifstream& infile, ofstream& outfile)
{
string last_name, first_name;
char name;
int grade, counter = 0;
double sum = 0, average = 0;
while(infile >> last_name)
{
    infile >> first_name;

    outfile << last_name << ' ' << first_name << " ";
    infile.get(name);

     while (name != '\n')
    {
        if(isdigit(name))
        {
            infile.putback(name);
            infile >> grade;
            outfile << grade << " ";
            sum += grade;
            counter ++;
         }
        infile.get(name);
     }
        average = sum / counter;
        outfile << average << endl;
        sum = 0;
        counter = 0;
 }
}
/*Sample Output(within the output file):
test_ line_ 10 20 30 40 50 60 70 80 90 100 55
Price Betty 40 50 60 70 60 50 40 30 60 90 55
Good John 60 70 80 90 50 60 90 90 100 90 78
Smith Charles 70 80 90 60 70 60 80 90 90 90 78
Spangenberg Ward 70 70 80 90 70 80 90 80 70 60 76*/
