//File Name: CS02Lab15.cpp
//Author: Yujia Huang, Adam Mejia
//Email: freya.huang@yahoo.com, adamrooski@gmail.com
//Description: This program makes triangles and diamonds using a drawline function.
//Last Modified: 10/28/2014

#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS
void getInputs(char&character_par, int&size_par);
void triangle(char character_par, int size_par);
void USDtriangle(char character_par, int size_par);
void diamond(char character_par, int size_par);
void SWtriangle(char character_par, int size_par);
void drawline(char character_par, int size_par, int space_par = 0);
void display ();
void menu(int&shape_par, int & choice_par);
//MAIN PROGRAM
int main()
{

    //DECLARE VARIABLES
    int shape, choice, size;
    char ans('y'), character;

    display();

    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {

        //REQUEST INPUTS
        menu(shape, choice);

        if (choice == 1)
        {
        getInputs(character, size);
        }
        else
        {
            character = '*';
            size = 4;
        }

        //SWITCH FOR DETERMINING SHAPES
        switch (shape)
        {
        case 1:
            triangle(character, size);
            break;
        case 2:
            diamond(character, size);
            break;
        case 3:
            USDtriangle(character, size);
            break;
        case 4:
            SWtriangle(character, size);
            break;
        default:
            cout << "An error occurred.\n";

        }

        //PLAY AGAIN WITH VALIDATION
        cout << "Would you like to run the calculation again?(Y/N)\n";
        cin >> ans;
        while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N')
        {
            cout << "I'm sorry I don't understand.\nWould you like to run the calculation again?(Y/N)\n";
            cin >> ans;
        }

    }
    return 0;
}

//FUNCTION DEFINITIONS

void getInputs(char&character_par, int&size_par)
{
    cout << "\nPlease enter the size of your shape (use positive integers):";
    cin >> size_par;
    while (size_par < 1 )
    {
        cout << "I'm sorry I don't understand\n"
             << "\nPlease enter the size of your shape (use positive integers):";
        cin >> size_par;
    }
    cout << "\nPlease enter the character you would like to use for your shape:";
    cin  >> character_par;
}

void triangle(char character_par, int size_par)
{
    for (int i = 0, m = size_par - 1, n = 1; i < size_par; i++, m--, n+=2)
    {
        drawline(character_par, n, m);
    }

}
void USDtriangle(char character_par, int size_par)
{
    for (int i = size_par, m = 0 , n = (2*size_par)-1; i > 0 ; i--, m++, n-=2)
    {
        drawline(character_par, n, m);
    }
\
}

void diamond(char character_par, int size_par)
{
    for (int i = 1, m = size_par - 1, n = 1; i < size_par; i++, m--, n+=2)
    {
        drawline(character_par, n, m);
    }
    for (int i = size_par, m = 0 , n = (2*size_par)-1; i > 0 ; i--, m++, n-=2)
    {
        drawline(character_par, n, m);
    }
}

void SWtriangle(char character_par, int size_par)
{
    for (int i = 1, m = size_par - 1, n = 1; i < size_par; i++, m--, n+=1)
    {
        drawline(character_par, n);
    }
    for (int i = size_par, m = 0 , n = size_par; i > 0 ; i--, m++, n-=1)
    {
        drawline(character_par, n);
    }
}
void drawline(char character_par, int size_par, int space_par)
{
    for (int i = space_par; i > 0; i--)
    {
       cout << " ";
    }
    for (int i = 0; i < size_par; i++ )
    {
        cout << character_par;
    }
    cout << "\n";
}

void display()
{
    cout << "Description: This program makes triangles and diamonds using a drawline function.\n";
}

void menu(int & shape_par, int & choice_par)
{
    cout << "What type of shape would you like to make?\nEnter 1 for triangle\nEnter 2 for diamond"
         <<   "\nEnter 3 for upside down triangle\nEnter 4 for sideways triangle\nEnter your choice:";
    cin >> shape_par;
    while (shape_par < 1 || shape_par > 4)
    {
        cout << "I'm sorry I don't understand\n"
             << "What type of shape would you like to make?\nEnter 1 for triangle\nEnter 2 for diamond"
             <<   "\nEnter 3 for upside down triangle\nEnter 4 for sideways triangle\nEnter your choice:";
        cin >> shape_par;
    }
    cout << "Press 1 to create a custom shape\nPress 2 to create a default shape\nPlease Enter Your Choice:";
    cin >> choice_par;
    while (choice_par < 1 || choice_par > 2)
    {
        cout << "I'm sorry I don't understand\n"
             << "Press 1 to create a custom shape\nPress 2 to create a default shape\nPlease Enter Your Choice:";
        cin >> choice_par;
    }
}

/* TEST RUN
Description: This program makes triangles and diamonds using a drawline function.
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:5
I'm sorry I don't understand
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:7
I'm sorry I don't understand
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:2
Press 1 to create a custom shape
Press 2 to create a default shape
Please Enter Your Choice:2
   *
  ***
 *****
*******
 *****
  ***
   *
Would you like to run the calculation again?(Y/N)
y
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:2
Press 1 to create a custom shape
Press 2 to create a default shape
Please Enter Your Choice:1

Please enter the size of your shape (use positive integers):10

Please enter the character you would like to use for your shape:X
         X
        XXX
       XXXXX
      XXXXXXX
     XXXXXXXXX
    XXXXXXXXXXX
   XXXXXXXXXXXXX
  XXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXX
XXXXXXXXXXXXXXXXXXX
 XXXXXXXXXXXXXXXXX
  XXXXXXXXXXXXXXX
   XXXXXXXXXXXXX
    XXXXXXXXXXX
     XXXXXXXXX
      XXXXXXX
       XXXXX
        XXX
         X
Would you like to run the calculation again?(Y/N)
y
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:3
Press 1 to create a custom shape
Press 2 to create a default shape
Please Enter Your Choice:2
*******
 *****
  ***
   *
Would you like to run the calculation again?(Y/N)
y
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:4
Press 1 to create a custom shape
Press 2 to create a default shape
Please Enter Your Choice:2
*
**
***
****
***
**
*
Would you like to run the calculation again?(Y/N)

*/
