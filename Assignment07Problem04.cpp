//Adam Mejia
//CS02 Assignment 7 Problem 4
//This program will take 3 inputs (need, rate and dur)
//The program will output a premium and monthly payment as many times as the user pleases

#include <iostream>
#include <string>
using namespace std;

int main()
{
double need, rate, dur, prem, monthly, dur2;
string ans;
ans = "yes";

do{
cout << "Please enter the amount you need in USD:\n$";
cin >> need;

cout << "Please enter the interest rate:\n%";
cin >> rate;
rate /= 100;

cout << "Please enter loan duration in months:\n";
cin >> dur;
dur2 = dur / 12;

prem = need / (1-rate*dur2);
monthly = prem / (dur);

std::cout.precision(2);
std::cout << std::fixed;
std::cout << "Your premium must be $"
     << prem
     << " in order for you to receive $"
     << need
     << "\nYour monthly payment will be $";

std::cout     << monthly
     << "\nThank you for banking with Adam\nIf you dont pay us, we'll find you :)\n";

cout << "Would you like to calculate another loan?\nY/N?\n";
cin >> ans;
}
while (ans == "y" || ans == "Y" || ans == "yes" || ans == "Yes" || ans == "YES");

cout << "Thank you. Come again\n";

return 0;
    }
//SAMPLE RUN
/*
    Please enter the amount you need in USD:
    $775
    Please enter the interest rate:
    %15
    Please enter loan duration in months:
    18
    Your premium must be $1000 in order for you to receive $775
    Your monthly payment will be $55.56
    Thank you for banking with Adam
    If you don't pay us, we'll find you :)
    Would you like to calculate another loan?
    Y/N?
*/
