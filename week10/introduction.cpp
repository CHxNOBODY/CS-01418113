#include <iostream>
#include <string>

using namespace std; // ลดรูปในการเขียน ไม่จำเป็นที่จะต้องเขียน std::

int main() {
    cout << "Hello World" << endl;
    // cout = console output  // endl = end line ('\n')
    
    cout << 100;
    cout << " ";
    cout << 200;
    cout << '\n';
    
    int number = 150;
    number += 300;
    cout << "Number: " << number << endl;
    
    int number;
    char line[200];

    cin >> number;
    cin >> line;

    cout << "Number: " << number << endl;
    cout << "Line: " << line << endl;

    string s; 
    s = "Hello";
    s = "World";
    s += " Hello";

    cout << s << endl;
    
    for (int i = 0; i < s.size(); ++i){
        cout << "[" << s[i] << "]";
    }
    cout << endl;

    for (char ch : s) {
        cout << '(' << ch << ')';
    }
    cout << endl;

    return 0;
}
