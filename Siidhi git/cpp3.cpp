// Aim: To convert string to lowercase

#include <iostream>
using namespace std;

void toLowerCase(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int main()
{
    char str[100];
    cin.getline(str,100);

    toLowerCase(str);

    cout << str;

    return 0;
}