//File Name: Assignment14Problem06.cpp
//Authors: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program combs through a text file and replaces multiple spaces and breaks with single spaces and breaks.
//Last Modified: 11/04/2014

#include <iostream>
#include <fstream>

using namespace std;

//THIS FUNCTION CREATES A FILE CONTAINING SINGLE SPACES AND DOUBLE SPACES
void makeFile();
//THIS FUNCTION READS THE FIRST FILE AND REPLACES MULTIPLE SPACES AND BREAKS WITH SINGLE SPACES AND BREAKS IN A NEW FILE
void processFile();

int main()
{


    //DECLARE VARIABLES
    char ans('y');

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {
        makeFile();
        processFile();

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

    out_stream << "The rain in spain falls mainly on the plain."
               << "\n"
               << "There    once  was  a  man  from  Nantucket."
               << "\n"
               << "\n"
               << "\n"
               << "Who kept all his brains in a bucket."
               << "\n"
               << "He  fell  off  a  cliff  and  fractured  his  hip,"
               << "\n"
               << "and now he thinks he can play the trumpet.";

    out_stream.close();
}

void processFile()
{
    ifstream in_stream;
    ofstream out_stream;
    char next;
    in_stream.open("numFile.txt");

    if(in_stream.fail())
    {
        cout << "Failed to open file.";
        exit(1);
    }

    out_stream.open("newFile.txt");
    if(out_stream.fail())
    {
        cout << "Failed to open file.";
        exit(1);
    }

    while(!in_stream.eof())
    {
        in_stream.get(next);

        if (in_stream.eof())
        {
            ;  //THIS IF STATEMENT ELIMINATES THE DUPLICATE CHARACTER AT THE END OF THE FILE
        }

        else if (isspace(next))
        {
            out_stream.put(next);
            in_stream.get(next);
            if (isspace(next))
            {
                while(isspace(next))
                {
                    in_stream.get(next);
                }
                out_stream.put(next);
            }
            else
            {
                out_stream.put(next);
            }
        }

        else
        {
            out_stream.put(next);
        }
    }
    in_stream.close();

}

/*TEST RUN

*/
