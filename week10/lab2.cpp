#include <iostream>
#include <string>

using namespace std;

class Hero {
private:
    string name;
    int level;
public:
    Hero(string n, int l) {
        name = n;
        level = l;
    }

    string getName() {
        return name;
    }

    int getLevel() {
        return level;
    }
};

int main() {
    string heroName;
    int heroLevel;

    cin >> heroName >> heroLevel;

    Hero hero(heroName, heroLevel);

    cout << hero.getName() << " " << hero.getLevel() << endl;

    return 0;
}