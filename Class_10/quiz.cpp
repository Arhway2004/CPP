// #include <iostream>

// class Complex(){
//     public:
//         double real, image;
//         Complex(double real, double image):(real(real), image(image)){}
//     Complex operator+(const  Complex& other)const{
//         return Complex(real+other.real,image+other.real);

//     }
//     // Friend function for output formatting(optional)
//     Friend std::ostream& operator <<(std::ostream& os, const Complex& c){
//         os << "(" << c.real << "," << c.image << ")";
//             retrun os;
//     }
// };

// int main() {
//     Complex c1(2, 3);
//     Complex c2(4, 5);
//     Complex c3 = c1 + c2; // Using overloaded + operator
//     std::cout << "c1: " << c1 << std::endl; // Printing using friend function
//     std::cout << "c2: " << c2 << std::endl;
//     std::cout << "c3: " << c3 << std::endl;
//     return 0;
// }
#include <iostream>

// class Complex {
//     public:
//         double real, imag, another;
//         Complex(double real = 0.0, double imag = 0.0, double another =0.0) : real(real), imag(imag), another(another) {}
// // Member function for operator overloading
// // Overloads the + operator to add two complex numbers.
// // It takes a const reference to another Complex object and returns a new Complex object representing the sum.
//         Complex operator+(const Complex& other) const {
//             return Complex(real + other.real, imag + other.imag, another+other.another);
//         }
// // Friend function for output formatting (optional)
// // that overloads the << operator to allow printing of Complex objects to output streams
//         friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
//             os << "[" << c.real << ", " << c.imag <<"," << c.another<<"]";
//             return os;
//     }
// };

// int main() {
//     Complex c1(2, 3, 4);
//     Complex c2(6, 7, 8);
//     Complex c2_5(4,5,3);
//     // Complex
//     Complex c3 = c1 + c2+ c2_5; // Using overloaded + operator
//     std::cout << "c1: " << c1 << std::endl; // Printing using friend function
//     std::cout << "c2: " << c2 << std::endl;
//     std::cout << "c2_5: " << c2_5 << std::endl;
//     std::cout << "c3: " << c3 << std::endl;
//     return 0;
// }

class Complex {
    public:
        double real, imag, another;
        Complex(double real = 0.0, double imag = 0.0, double another =0.0) : real(real), imag(imag), another(another) {}
// Member function for operator overloading
// Overloads the + operator to add two complex numbers.
// It takes a const reference to another Complex object and returns a new Complex object representing the sum.
        Complex operator+(const Complex& other) const {
            return Complex(real + other.real, imag + other.imag, another+other.another);
        }
// Friend function for output formatting (optional)
// that overloads the << operator to allow printing of Complex objects to output streams
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