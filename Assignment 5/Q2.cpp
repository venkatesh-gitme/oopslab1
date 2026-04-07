#include <iostream>
using namespace std;

class base {
protected:
    int num;

public:
    base() {
        num = 20;
    }
};

class derived : public base {
public:
    void showvalue() {
        cout << "stored value is: " << num << endl;
    }
};

int main() {
    cout<<"Venkatesh Rai 1024150086"<<endl;
    derived d1;
    d1.showvalue();

    return 0;
}
