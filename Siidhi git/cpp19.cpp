// Aim: To check prime number

#include<iostream>
using namespace std;

int main()
{
    int n = 7, i;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            break;
    }

    if(i == n)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}