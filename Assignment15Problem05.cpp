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
    string str("test");
    int pos1(0), pos2(0);

    getline(fin_par, str);//GETS FIRST LINE

    while(!fin_par.eof())
    {
        pos1 = str.find("cin");
        pos2 = str.find("cout");

        if (pos1 == string::npos && pos2 == string::npos)
        {
           fout_par << str;
           fout_par << "\n";
        }
        else if (pos1 != string::npos)
        {
            pos1 = str.find("<<");

            if (pos1 == string::npos)
            {
                fout_par << str;
                fout_par << "\n";
            }
            else
            {
                str.erase(pos1, 2);
                str.insert(pos1, ">>");
                fout_par << str;
                fout_par << "\n";
            }

        }
        else if (pos2 != string::npos)
        {
            pos2 = str.find(">>");

            if (pos2 == string::npos)
            {
                fout_par << str;
                fout_par << "\n";
            }
            else
            {
                str.erase(pos2, 2);
                str.insert(pos2, "<<");
                fout_par << str;
                fout_par << "\n";
            }
        }

        getline(fin_par, str);
    }

    fout_par << str;

}



/*TEST RUN


Please enter the name of your input file:
badC.txt

Please enter the name of your output file:
goodC.txt
Would you like to run the program again?(Y/N)
n
Press <RETURN> to close this window...


*/
