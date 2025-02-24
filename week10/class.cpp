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
    Book() : Book("Sample Book", 100) {       // default Constructor
        title = "Sample Book";
        totalPage = 100;
        read = 0;
    }

    Book(string t) : Book(t, 100) { // This call Constructor chaining

    }

    Book(string t, int total) : read(0) {  // Constructor (Overloading)
        title = t;
        totalPage = total;
    }

    void setTitle(string title) { // method name use lowerCamerCase
        this -> title = title;
    }
    string getTitle() {
        return title;
    }

    int getTotalPage() {
        return totalPage;
    }

    void readMore(int page) {
        read += page > 0 ? page : 0;
    }
};

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
    
    return 0;
    
}