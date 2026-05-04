// Aim: To implement ++ and -- operator

#include<iostream>
using namespace std;

class counter{
protected:
    int count;

public:
    counter(){ count = 0; }

    int getcount(){ return count; }

    counter operator++(){
        ++count;
        return *this;
    }
};

class countDn : public counter{
public:
    counter operator--(){
        --count;
        return *this;
    }
};

int main(){
    countDn c;

    ++c; ++c; ++c;
    cout << c.getcount() << endl;

    --c;
    cout << c.getcount();
}