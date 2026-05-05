class LibraryUser
{
public:
    string name;
    int id;
};

class Student : public LibraryUser
{
public:
    int grade;
};

class Teacher : public LibraryUser
{
public:
    string dept;
};

void q8()
{
    Student s;
    Teacher t;
    s.name="a"; s.grade=10;
    t.name="b"; t.dept="cs";
    cout<<s.name<<" "<<s.grade<<endl;
    cout<<t.name<<" "<<t.dept<<endl;
}
