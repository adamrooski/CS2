//File Name: CS02Lab14.cpp
//Author: Yujia Huang, Adam Mejia
//Email: freya.huang@yahoo.com, adamrooski@gmail.com
//Description: This program makes triangles and diamonds.
//Last Modified: 10/23/2014

#include <iostream>
using namespace std;

//FUNCTION DECLARATIONS
void getInputs(int&shape_par, char&character_par, int&size_par);
void triangle(char character_par, int size_par);
void USDtriangle(char character_par, int size_par);
void diamond(char character_par, int size_par);
void SWtriangle(char character_par, int size_par);

//MAIN PROGRAM
int main()
{

    //DECLARE VARIABLES
    int shape, size;
    char ans('y'), character;



    //BEGIN PLAY AGAIN LOOP

    while(ans == 'y' || ans == 'Y')
    {

        //REQUEST INPUTS
        getInputs(shape, character, size);

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

void getInputs(int&shape_par, char&character_par, int&size_par)
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
    int line(0), space(0), count(0);
    for(line = 0; line <= size_par; line++)
    {
        for (space = 0; space < (size_par - line); space++)
        {
         cout << " ";
        }
        for(count = 0; count < (2*line)-1; count++)
        {
            cout << character_par;
        }
       cout << "\n";
    }

}
void USDtriangle(char character_par, int size_par)
{
    int line(0), space(0), count(0);
    for(line = size_par; line >= 0 ; line--)
    {
        for (space = 0; space < (size_par - line); space++)
        {
         cout << " ";
        }
        for(count = 0; count < (2*line)-1; count = count++)
        {
            cout << character_par;
        }
       cout << "\n";
    }
}

void diamond(char character_par, int size_par)
{
    int line(0), space(0), count(0);
    for(line = 0; line < size_par; line++)
    {
        for (space = 0; space < (size_par - line); space++)
        {
         cout << " ";
        }
        for(count = 0; count < (2*line)-1; count++)
        {
            cout << character_par;
        }
       cout << "\n";
    }
    USDtriangle(character_par, size_par);
}

void SWtriangle(char character_par, int size_par)
{
    int line(0), count(0);
    for(line = 0; line < size_par; line++)
    {
        for(count = 0; count < line; count++)
        {
            cout << character_par;
        }
       cout << "\n";
    }
    for(line = size_par; line >= 0 ; line--)
    {
        for(count = 0; count < line; count = count++)
        {
            cout << character_par;
        }
       cout << "\n";
    }
}

/* TEST RUN
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:1

Please enter the size of your shape (use positive integers):3

Please enter the character you would like to use for your shape:*

  *
 ***
*****
Would you like to run the calculation again?(Y/N)
y
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:2

Please enter the size of your shape (use positive integers):4

Please enter the character you would like to use for your shape:@

   @
  @@@
 @@@@@
@@@@@@@
 @@@@@
  @@@
   @

Would you like to run the calculation again?(Y/N)
y
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:3

Please enter the size of your shape (use positive integers):5

Please enter the character you would like to use for your shape:.
.........
 .......
  .....
   ...
    .

Would you like to run the calculation again?(Y/N)
y
What type of shape would you like to make?
Enter 1 for triangle
Enter 2 for diamond
Enter 3 for upside down triangle
Enter 4 for sideways triangle
Enter your choice:4

Please enter the size of your shape (use positive integers):10

Please enter the character you would like to use for your shape:+

+
++
+++
++++
+++++
++++++
+++++++
++++++++
+++++++++
++++++++++
+++++++++
++++++++
+++++++
++++++
+++++
++++
+++
++
+

Would you like to run the calculation again?(Y/N)
n
Press <RETURN> to close this window...
*/
