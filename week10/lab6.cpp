#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time {
private:
    int hour, minute, second;
public:
    Time(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
    Time(int duration) {
        hour = duration / 3600;
        duration %= 3600;
        minute = duration / 60;
        second = duration % 60;
    }
    int getDuration() {
        return 0;
    }
};