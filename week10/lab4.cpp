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
    
    point getCenter() {
        return center;
    }
    
    double getRadius() {
        return radius;
    }
    
    void setCenter(point newCenter) {
        center = newCenter;
    }

    void setRadius(double newRadius) {
        radius = newRadius;
    }
};

int main() {
    point center;
    cout << "Center of Circle: ";
    cin >> center.xPosition >> center.yPosition;

    double radius;
    cout << "Radius of Circle: ";
    cin >> radius;

    Circle new_circle(center, radius);

    point test_point;
    cout << "Point to Check: ";
    cin >> test_point.xPosition >> test_point.yPosition;

    cout << "Area of Circle is " << new_circle.area() << endl;
    cout << "Distance from Center to Point (" << test_point.xPosition << ", " << test_point.yPosition << ") is " << new_circle.distanceFromCenter(test_point) << endl;

    if (new_circle.contains(test_point)) {
        cout << "This circle contains this point." << endl;
    } else {
        cout << "This point is not in this circle." << endl;
    }
    
    return 0;
}