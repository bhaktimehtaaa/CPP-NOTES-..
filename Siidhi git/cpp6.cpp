// Aim: To write binary file

#include <fstream>
using namespace std;

int main()
{
    ofstream file("Data.bin", ios::binary);
    int arr[5] = {1,2,3,4,5};

    file.write((char*)arr, sizeof(arr));
    file.close();

    return 0;
}