// Aim: To display array of strings

#include<iostream>
using namespace std;

int main()
{
    char *day[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    for(int i = 0; i < 7; i++)
        cout << day[i] << endl;

    return 0;
}