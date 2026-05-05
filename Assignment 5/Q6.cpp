class Book
{
public:
    string title, author;
    int price;
};

class Textbook : public Book
{
public:
    string subject;
};

void q6()
{
    Textbook t;
    t.title = "abc";
    t.author = "xyz";
    t.price = 100;
    t.subject = "math";
    cout << t.title << " " << t.subject << endl;
}
