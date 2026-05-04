// Aim: To read binary file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("Data.bin", ios::binary);
    int num;

    file.read((char*)&num, sizeof(num));

    cout << num;

    file.close();

    return 0;
}