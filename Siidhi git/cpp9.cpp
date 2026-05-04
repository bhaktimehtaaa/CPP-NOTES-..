
// Aim: To demonstrate constructor

#include<iostream>
using namespace std;

class Distance{
    int feet;
    float inch;

public:
    Distance(){ feet = 0; inch = 0; }
    Distance(int f, float i){ feet = f; inch = i; }

    void show(){
        cout << feet << " " << inch << endl;
    }
};

int main(){
    Distance d1, d2(10,6.5);

    d1.show();
    d2.show();
}