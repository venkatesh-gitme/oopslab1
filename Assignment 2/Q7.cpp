// Q7. Create a code to implement the namespace and use similar variables and functions defined in different code sections.

#include <iostream>
using namespace std;

namespace First {
    int value = 10;

    void show() {
        cout << "First::value = " << value << endl;
    }
}

namespace Second {
    int value = 20;

    void show() {
        cout << "Second::value = " << value << endl;
    }
}

int main() {
    First::show();
    Second::show();

    cout << "First::value (direct) = " << First::value << endl;
    cout << "Second::value (direct) = " << Second::value << endl;

    return 0;
}
