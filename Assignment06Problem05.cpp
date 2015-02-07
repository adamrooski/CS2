#include <iostream>
using namespace std;

int main()
{

    int width, height, totalLength;
    cout << "Hello \n";
    cout << "Press return after entering a number. \n";
    cout << "Enter the width:\n";

    cin >> width;

    cout << "Enter the height:\n";
    cin >> height;
    totalLength = (2 * width) + (2 * height);
    cout << "If you have a rectangular area that is ";
    cout << width;
    cout << " feet wide.\n";
    cout << "and ";
    cout << height;
    cout << " feet high, then\n";
    cout << "you will need ";
    cout << totalLength;
    cout << " total feet of fence to enclose it. \n";
    cout << "Good-bye \n";
    return 0;
}
