//File Name: Assignment15Problem06.cpp
//Authors: Adam Mejia
//Email: adamrooski@gmail.com
//Description: This program doesn't really answer questions. It requires answers.txt to be in the root directory.
//Last Modified: 11/06/2014

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//GLOBAL VARIABLE
const int number_of_chapters(17);

//DECLARE FUNCTIONS
void openStreams(ifstream & fin_par);
void closeStreams(ifstream & fin_par);
void askQuestions(ifstream & fin_par);

int main()//BEGIN MAIN
{
    //DECLARE VARIABLES AND OBJECTS
    ifstream fin;
    openStreams(fin);
    askQuestions(fin);
    closeStreams(fin);

    return 0;
}//END MAIN

//FUNCTION DEFINITIONS
void openStreams(ifstream & fin_par)
{
 fin_par.open("answers.txt");
 if(fin_par.fail())
 {
     cout << "\nFailed to open input file.";
     exit(1);
 }

}

void closeStreams(ifstream & fin_par)
{
    fin_par.close();
}

void askQuestions(ifstream &fin_par)
{
    char ans('y');
    string foo;
    string answer;
    int boogers(18), sandwiches(8), pos(0);

    //BEGIN PLAY AGAIN LOOP
    while(ans == 'y' || ans == 'Y')
    {
        if (boogers == 0)
        {
            boogers = 18;
        }
        if (sandwiches == 0)
        {
            closeStreams(fin_par);
            openStreams(fin_par);
            sandwiches = 8;
        }

        cout << "Please type in your question and press enter.\n";
        cin.ignore();
        getline(cin, foo);
        getline(fin_par, answer);
        pos = answer.find("#N");
        if (pos == string::npos)
        {
            cout << answer;
            sandwiches -=1;
        }
        else if (pos != string::npos)
        {
            answer.erase(pos, 2);
            answer.insert(pos, to_string(boogers));
            cout << answer;
            boogers -= 1;
            sandwiches -=1;
        }

        //PLAY AGAIN WITH VALIDATION
        cout << "\nWould you like to ask another question?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to ask another question?(Y/N)\n";
            cin >> ans;
        }

    }//END PLAY AGAIN LOOP
}





/*TEST RUN

Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 7.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That's a good question.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
If I were you, I would not worry about such things.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That question has puzzled phiosophers for centuries.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I don't know. I'm just a machine.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 6.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That's a good question.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
If I were you, I would not worry about such things.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That question has puzzled phiosophers for centuries.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I don't know. I'm just a machine.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 5.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That's a good question.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
If I were you, I would not worry about such things.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That question has puzzled phiosophers for centuries.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I don't know. I'm just a machine.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 4.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That's a good question.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
If I were you, I would not worry about such things.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That question has puzzled phiosophers for centuries.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I don't know. I'm just a machine.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 3.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That's a good question.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
If I were you, I would not worry about such things.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That question has puzzled phiosophers for centuries.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I don't know. I'm just a machine.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 2.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That's a good question.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
If I were you, I would not worry about such things.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That question has puzzled phiosophers for centuries.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I don't know. I'm just a machine.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 1.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That's a good question.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
If I were you, I would not worry about such things.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
That question has puzzled phiosophers for centuries.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I don't know. I'm just a machine.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
Think about it and the answer will come to you.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I used to know the answer to that question, but I've forgotten it.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
The answer can be found in a secret place in the woods.
Would you like to ask another question?(Y/N)
y
Please type in your question and press enter.
y
I'm not sure, but I think you will find the answer in Chapter 18.
Would you like to ask another question?(Y/N)


*/
