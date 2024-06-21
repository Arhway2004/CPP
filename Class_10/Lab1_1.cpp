#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Fraction {
public:
    int f1, f2;
    Fraction(int f1 = 0, int f2 = 1) : f1(f1), f2(f2) {}

    Fraction operator+(const Fraction& other) const {
        int newNumerator = f1 * other.f2 + other.f1 * f2;
        int newDenominator = f2 * other.f2;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator-(const Fraction& other) const {
        int newNumerator = f1 * other.f2 - other.f1 * f2;
        int newDenominator = f2 * other.f2;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator*(const Fraction& other) const {
        int newNumerator = f1 * other.f1;
        int newDenominator = f2 * other.f2;
        return Fraction(newNumerator, newDenominator);
    }

    Fraction operator/(const Fraction& other) const {
        int newNumerator = f1 * other.f2;
        int newDenominator = f2 * other.f1;
        return Fraction(newNumerator, newDenominator);
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& c) {
        int Numerator = c.f1;
        int Denominator = c.f2;
        for (int i = 2; i <= 10; ++i) {
            if (c.f1 % i == 0 && c.f2 % i == 0) {
                Numerator = c.f1 / i;
                Denominator = c.f2 / i;
            }
        }
        os << Numerator << "/" << Denominator;
        return os;
}

};

int main() {
    Fraction f1, f2;
    std::string input1, input2;
    std::cout << "Enter first fraction (format a/b): ";
    std::getline(std::cin, input1);
    std::istringstream iss1(input1);
    std::getline(iss1, input1, '/');
    std::getline(iss1, input2);
    f1.f1 = std::stoi(input1);
    f1.f2 = std::stoi(input2);

    std::cout << "Enter second fraction (format a/b): ";
    std::getline(std::cin, input1);
    std::istringstream iss2(input1);
    std::getline(iss2, input1, '/');
    std::getline(iss2, input2);
    f2.f1 = std::stoi(input1);
    f2.f2 = std::stoi(input2);

    std::cout << "f1 + f2 = " << (f1 + f2) << std::endl;
    std::cout << "f1 - f2 = " << (f1 - f2) << std::endl;
    std::cout << "f1 * f2 = " << (f1 * f2) << std::endl;
    std::cout << "f1 / f2 = " << (f1 / f2) << std::endl;

    return 0;
}
//need to focus
