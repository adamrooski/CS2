#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
   add:
    cout << num1 << "\n";
    if (num1 < 10)
    { num1 += 1;
goto add;
}
    else{
        return 0;
}
    }
