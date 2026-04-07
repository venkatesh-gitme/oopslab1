#include <iostream>
using namespace std;

class parent {
public:
    void printbase() {
        cout << "this is the parent class method" << endl;
    }
};

class child : public parent {
public:
    void printderived() {
        cout << "this is the child class method" << endl;
    }
};

int main() {
    cout<<"Venkatesh 1024150086"<<endl;
    parent baseobj;
    child derivedobj;

    baseobj.printbase();

    derivedobj.printbase();
    derivedobj.printderived();

    return 0;
}
