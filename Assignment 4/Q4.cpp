#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
public:
    Student() {
        name = "Unassigned";
        cout << "Constructor: Object created" << endl;
    }
    void setName(string n) { name = n; }
    void display() { cout << "Student Name: " << name << endl; }
    ~Student() {
        cout << "Destructor: Object destroyed" << endl;
    }
};

int main() {
    int* intPtr = new int(25);
    float* floatPtr = new float(98.6);

    cout << "Integer Value: " << *intPtr << endl;
    cout << "Float Value: " << *floatPtr << endl;

    int size = 3;
    int* intArray = new int[size]{10, 20, 30};
    float* floatArray = new float[size]{1.1, 2.2, 3.3};

    cout << "Integer Array: ";
    for(int i = 0; i < size; i++) cout << intArray[i] << " ";
    cout << "\nFloat Array: ";
    for(int i = 0; i < size; i++) cout << floatArray[i] << " ";
    cout << endl;

    Student* studentPtr = new Student();
    studentPtr->setName("Alice");
    studentPtr->display();

    
    Student* studentArray = new Student[2];
    studentArray[0].setName("Bob");
    studentArray[1].setName("Charlie");
    for(int i = 0; i < 2; i++) {
        studentArray[i].display();
    }
    delete intPtr;
    delete floatPtr;
    delete studentPtr;

    delete[] intArray;
    delete[] floatArray;
    delete[] studentArray;

    return 0;
}
