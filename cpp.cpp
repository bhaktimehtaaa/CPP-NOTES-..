//Aim:
//To study and understand the concept of pointers in C++ by storing the address of a variable in a pointer variable, accessing the value using dereferencing, and displaying both the address and value to observe how pointers work in memory management.

#include <iostream>
using namespace std;

int main()
{
    int i = 3, *j;

    j = &i;

    cout << &i << endl;
    cout << i << endl;
    cout << j << endl;
    cout << *j;

    return 0;
}
