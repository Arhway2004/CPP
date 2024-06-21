#include <iostream>

class Complex {
    public:
        double real, imag, another;
        Complex(double real = 0.0, double imag = 0.0, double another =0.0) : real(real), imag(imag), another(another) {}
        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, imag + other.imag, another+other.another);
        }
        friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
            os << "[" << c.real << ", " << c.imag <<"," << c.another<<"]";
            return os;
    }
};

int main() {
    Complex c1(2, 3, 4);
    Complex c2(6, 7, 8);
    Complex c3 = c1 + c2;
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3: " << c3 << std::endl;
    return 0;
}