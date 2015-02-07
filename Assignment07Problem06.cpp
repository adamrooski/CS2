//Adam Mejia
//CS02 Assignment 7 Problem 6
//This program will take 2 inputs (hours, dpnd)
//The program will output gross pay, withholdings and net pay based on a given pay rate and given deductions

#include <iostream>
#include <string>
using namespace std;

int main()
{
double hours, dpnd, gross, net, sst, fit, sit;
string ans;
ans = "yes";

do{
cout << "Please enter the number of hours worked:\n";
cin >> hours;

cout << "Please enter the number of dependents:\n";
cin >> dpnd;

if(hours > 40)
{
    gross = (40 * 16.78)+ ((hours - 40)* 25.17);
}
else
{
    gross = hours * 16.78;
}

sst = gross * .06;
fit = gross * .14;
sit = gross * .05;

if(dpnd >= 3)
{
    net = gross - sst - fit - sit - 45;
std::cout.precision(2);
std::cout << std::fixed;
std::cout << "Gross Pay:$"
     << gross
     << "\nWithholdings:\nSocial Security Tax:$"
     << sst
     << "\nFederal Income Tax:$"
     << fit
     << "\nState Income Tax:$"
     << sit
     << "\nUnion Dues:$10.00\n"
     << "Too Many Babies Tax:$35.00\nNet Pay:$"
     << net;

cout << "\nWould you like to calculate your pay again?\nY/N?\n";
cin >> ans;
}
else{
    net = gross - sst - fit - sit - 10;
std::cout.precision(2);
std::cout << std::fixed;
std::cout << "Gross Pay:$"
     << gross
     << "\nWithholdings:\nSocial Security Tax:$"
     << sst
     << "\nFederal Income Tax:$"
     << fit
     << "\nState Income Tax:$"
     << sit
     << "\nUnion Dues:$10.00\nNet Pay:$"
     << net;

cout << "\nWould you like to calculate your pay again?\nY/N?\n";
cin >> ans;
}
}
while (ans == "y" || ans == "Y" || ans == "yes" || ans == "Yes" || ans == "YES");

cout << "Thank you. Come again\n";

return 0;
    }
//SAMPLE RUN
/*
    Please enter the number of hours worked:
    45
    Please enter the number of dependents:
    15
    Gross Pay:$797.05
    Withholdings:
    Social Security Tax:$47.82
    Federal Income Tax:$111.59
    State Income Tax:$39.85
    Union Dues:$10.00
    Too Many Babies Tax:$35.00
    Net Pay:$552.79
    Would you like to calculate your pay again?
    Y/N?
    n
    Thank you. Come again
*/
