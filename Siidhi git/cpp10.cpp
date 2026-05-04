11

// Aim: To add objects using operator overloading

#include<iostream>
using namespace std;

class Distance {
    int feet, inches;

public:
    Distance(int f=0,int i=0){
        feet=f; inches=i;
    }

    Distance operator+(Distance d){
        return Distance(feet+d.feet, inches+d.inches);
    }

    void show(){
        cout<<feet<<" "<<inches;
    }
};

int main(){
    Distance d1(5,7), d2(6,9);
    Distance d3 = d1 + d2;

    d3.show();
}