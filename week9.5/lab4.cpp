#include <iostream>
#include <string>
using namespace std;

typedef struct Word_ {
    string text;
    int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];
    
    while (true) {
        cin >> input;
        if (input == "exit") {
            break;
        }
        
        find = -1;
        for (i = 0; i < last_word; i++) {
            if (data[i].text == input) {
                find = i;
                break;
            }
        }
        
        if (find != -1) {
            data[find].count++;
        } else if (last_word < 20) {
            data[last_word].text = input;
            data[last_word].count = 1;
            last_word++;
        }
    }
    
    cout << "Output:" << endl;
    for (i = 0; i < last_word; i++) {
        cout << data[i].text << " = " << data[i].count << endl;
    }
    
    return 0;
}
