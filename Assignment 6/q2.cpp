class Book2 {
public:
    string title;
    string author;
    string ISBN;

    Book2() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book2(const string &title, const string &author, const string &ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book2(const Book2 &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library2 {
private:
    Book2 books[100];
    int count;

public:
    Library2() {
        count = 0;
    }

    bool addNewBook(const string &title, const string &author, const string &ISBN) {
        if (count >= 100) return false;
        books[count++] = Book2(title, author, ISBN);
        return true;
    }

    bool removeBooks(const string &ISBN);

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].ISBN << endl;
        }
    }
};

bool Library2::removeBooks(const string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}
