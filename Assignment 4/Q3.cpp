#include <iostream>

using namespace std;

class Demo {
private:
    int id;

public:
    Demo(int n) {
        id = n;
        cout << "Constructor called for Object " << id << endl;
    }

    ~Demo() {
        cout << "Destructor called for Object " << id << endl;
    }

    void display() {
        cout << "Object " << id << " is active." << endl;
    }
};

int main() {
    cout << "Entering main function..." << endl;

    Demo d1(1);
    {
        cout << "\nEntering nested scope..." << endl;
        Demo d2(2);
        d2.display();
        cout << "Exiting nested scope..." << endl;
        
    }

    cout << "\nBack in main scope..." << endl;
    d1.display();

    cout << "Exiting main function..." << endl;

    return 0;
}
