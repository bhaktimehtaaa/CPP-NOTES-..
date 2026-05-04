// Aim: To write data into file

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ofstream outfile("Data.txt");

    outfile << "Hello Students";

    cout << "File is written";

    return 0;
}