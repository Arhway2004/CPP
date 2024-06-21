#include <iostream>

class Point {
private:
    int xCoordinate;
    int yCoordinate;

public:
    // Constructor
    Point() : xCoordinate(0), yCoordinate(0) {}

    // Friend function declarations
    friend std::istream& operator>>(std::istream& in, Point& point);
    friend std::ostream& operator<<(std::ostream& out, const Point& point);
};

// Overload >> operator to read Point from stream
std::istream& operator>>(std::istream& in, Point& point) {//
    int x, y;
    if (!(in >> x >> y)) {
        // If input is invalid, set failbit and return
        in.clear(std::ios_base::failbit);
        return in;
    } else {
        point.xCoordinate = x;
        point.yCoordinate = y;
        return in;
    }
}

// Overload << operator to output Point to stream
std::ostream& operator<<(std::ostream& out, const Point& point) {//
    out << "(" << point.xCoordinate << ", " << point.yCoordinate << ")";
    return out;
}

int main() {
    Point p;
    std::cout << "Enter the coordinates of the point (x y): ";
    if (std::cin >> p) {
        std::cout << "The point is: " << p << std::endl;
    } else {
        std::cout << "Invalid input." << std::endl;
    }
    return 0;
}

