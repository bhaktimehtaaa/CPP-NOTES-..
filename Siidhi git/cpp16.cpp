// Aim: To swap two numbers

#include<iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b;

    return 0;
}