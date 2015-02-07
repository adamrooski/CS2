//File Name: CS02Lab18.cpp
//Authors: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program takes a text file and formats it for HTML.
//Last Modified: 11/06/2014

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//DECLARE FUNCTIONS
void instructions();
void openStreams(ifstream & fin_par, ofstream & fout_par);
void closeStreams(ifstream & fin_par, ofstream & fout_par);
void requestTitle(string & title_par);
void writeHeader(ofstream & fout_par, string title_par);
void copyText(ifstream & fin_par, ofstream & fout_par);
void writeFooter(ofstream & fout_par);

int main()//BEGIN MAIN
{


    //DECLARE VARIABLES AND OBJECTS
    char ans('y');
    string title("This is my C++ html converter");
    ifstream fin;
    ofstream fout;

    //BEGIN PLAY AGAIN LOOP
    while(ans == 'y' || ans == 'Y')
    {
        instructions();
        openStreams(fin, fout);
        requestTitle(title);
        writeHeader(fout, title);
        copyText(fin, fout);
        writeFooter(fout);
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

void requestTitle(string & title_par)
{
    char anse;
    cout << "\nWould you like to create a custom title?(Y/N)\n";
    cin >> anse;
    //VALIDATION
    while (anse != 'y' && anse != 'Y' && anse != 'n' && anse != 'N')
    {
        cout << "\nI'm sorry I don't understand.\nWould you like to create a custom title?(Y/N)\n";
        cin >> anse;
    }
    if(anse == 'y' || anse == 'Y')
    {
        cin.ignore();
        cout << "\nPlease enter your custom title and press enter:\n";
        getline(cin, title_par);
    }
    else
    {
        title_par = "This is my C++ html converter";
    }
}

void writeHeader(ofstream & fout_par, string title_par)
{
    fout_par << "<html>\n<title>"
             << title_par
             << "</title>\n<body>\n";
}

void copyText(ifstream & fin_par, ofstream & fout_par)
{
    char next(' ');
    fin_par.get(next);
    while(!fin_par.eof())
    {
        if(next == '\n')
        {
            fout_par.put('<');
            fout_par.put('b');
            fout_par.put('r');
            fout_par.put('>');

            fin_par.get(next);
        }
        else
        {
            fout_par.put(next);

            fin_par.get(next);
        }
    }

}

void instructions()
{
    cout << "\nThis program will take a plain text file (.txt) and convert it to an html file."
         << "\nPlease make sure your .txt file is in this program's directory."
         << "\nIf your html file doesn't exist the program will create one for you.\n";
}

void writeFooter(ofstream & fout_par)
{
    fout_par << "\n</body>\n</html>";
}

/*TEST RUN

This program will take a plain text file (.txt) and convert it to an html file.
Please make sure your .txt file is in this program's directory.
If your html file doesn't exist the program will create one for you.

Please enter the name of your input file:
numFile.txt

Please enter the name of your output file:
newFile1.html

Would you like to create a custom title?(Y/N)
n
Would you like to run the program again?(Y/N)
y

This program will take a plain text file (.txt) and convert it to an html file.
Please make sure your .txt file is in this program's directory.
If your html file doesn't exist the program will create one for you.

Please enter the name of your input file:
numFile.txt

Please enter the name of your output file:
newFile2.html

Would you like to create a custom title?(Y/N)
y

Please enter your custom title and press enter:
Good Morning America
Would you like to run the program again?(Y/N)
n
Press <RETURN> to close this window...

*/
