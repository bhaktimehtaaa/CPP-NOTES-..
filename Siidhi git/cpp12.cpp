// Aim: To use dynamic memory for string

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "Hello";
    char *ptr;

    ptr = new char[strlen(str)+1];
    strcpy(ptr, str);

    cout << ptr;

    delete[] ptr;

    return 0;
}