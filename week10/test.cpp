#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

class Circle {
private:
    point center;
    double radius;
public:
    Circle(point c, double r) {
        center = c;
        radius = r;
    }

    double area() {
        return M_PI * radius * radius;
    }
    
    double distanceFromCenter(point pt) {
        return sqrt(pow(pt.xPosition - center.xPosition, 2) + pow(pt.yPosition - center.yPosition, 2));
    }
    
    bool contains(point pt) {
        return distanceFromCenter(pt) <= radius;
    }
};

int main()
{
    point center, p;
    double radius;

    cout << "Center of Circle: ";
    cin >> center.xPosition >> center.yPosition;

    cout << "Radius of Circle: ";
    cin >> radius;

    Circle myCircle(center, radius);

    cout << "Point to Check: ";
    cin >> p.xPosition >> p.yPosition;

    cout << "Area of Circle is " << myCircle.area() << endl;

    double distance = myCircle.distanceFromCenter(p);
    cout << "Distance from Center to Point (" << p.xPosition << ", " << p.yPosition << ") is " << distance << endl;

    if (myCircle.contains(p)) {
        cout << "This circle contains this point." << endl;
    } else {
        cout << "This point is not in this circle." << endl;
    }

    return 0;
}
