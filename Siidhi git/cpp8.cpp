// Aim: To calculate salary using class

#include <iostream>
using namespace std;

class Employee {
    string name;
    float basicSalary;

public:
    void getData() {
        cin >> name >> basicSalary;
    }

    void calculate() {
        float gross = basicSalary + 0.2*basicSalary + 0.5*basicSalary;
        cout << gross;
    }
};

int main() {
    Employee e;
    e.getData();
    e.calculate();
}