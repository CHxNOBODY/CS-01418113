#include <iostream>
#include <string>

using namespace std;

// Consept OOP : OOP is A PIE;
// A : Abstraction
// P : Polymorphism
// I : Inheritance
// E : Encapsulaation

class Book {
private:           // all attribute are private
    string title;  // attribute title
    int totalPage; // use lowerCamelCase
    int read;
public:
    Book();      // default Constructor
    Book(string t); // This call Constructor chaining
    Book(string t, int total); // Constructor (Overloading)
    void setTitle(string title) ; // method name use lowerCamerCase
    string getTitle();  
    int getTotalPage();
    void readMore(int page);
    string toString();
};

// Note : function in class you can also use const for set that function cannot change.

int main() {
    Book book1;
    Book book2("Java for beginner");
    book1.setTitle("Introduction to  C++");

    Book* b3 = new Book("OOP for CS113");
    b3 -> setTitle("OOP is A PIE");
    b3 -> readMore(20);
    
    // book1.title = "Introduction to C++";
    // book1.setTitle("Introduction to C++");

    // book2.setTitle("Java for beginer");

    // b3 -> setTitle("OOP for CS113");
    
    cout << book1.getTitle() << " " << book1.getTotalPage() << endl;
    cout << book2.getTitle() << " " << book2.getTotalPage() << endl;
    cout << b3 -> getTitle() << " " << b3 -> getTotalPage() << endl;
    
    cout << book1.toString() << endl;
    cout << book2.toString() << endl;
    cout << b3 -> toString() << endl;

    return 0;
    
}

void Book::setTitle(string title) {
    this -> title = title;
}

string Book::getTitle() {
    return title;
    // or you can use "return this -> title"
}

Book::Book(string title , int totalPage) {
    this -> title = title;
    this -> totalPage = totalPage;
    read = 0;
}

Book::Book(string title) : Book(title, 200) {}

Book::Book() : Book("Sample Book") {}

int Book::getTotalPage() {
    return totalPage;
}

void Book::readMore(int page) {
    read += page > 0 ? page : 0;
}

string Book::toString() {
    string result = "Title";
    result += title;
    result += ", read: ";
    result += to_string(read);
    result += ", totalPage: ";
    result += to_string(totalPage);
    return result;
}