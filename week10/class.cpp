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
    void setTitle(string t) {
        title = t;
    }
    string getTitle() {
        return title;
    }
};

int main() {
    Book book1;
    Book book2;

    //book1.title = "Introduction to C++";
    book1.setTitle("Introduction to C++");
    book2.setTitle("Java for beginer");

    cout << book1.getTitle() << endl;
    cout << book2.getTitle() << endl;
    
    return 0;

}