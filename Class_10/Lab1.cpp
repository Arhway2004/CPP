// #include <iostream>
// using namespace std;

// // class Fraction(){
// //     public:
// //         int f1,f2;
// //         Fraction(int f1 =0, int f2=0): f1(f1),f2(f2){}
// //         // Fraction operator+(const Com)
// //         Complex operator+(const f1& f2) const {
// //         // void sum(f1,f2){
// //             int upper,lower;
// //             if(f1[2]==f2[2]){
// //                 upper = f1[0]+f1[2];
// //                 lower = f2[2];
// //             }else if(f1[2] > f2[2]){
// //                 if(f1[2]/f2[2]%1 >0){
// //                     lower = f1[2];
// //                     upper = f1[1]+(f2[1]*(f1[2]/f1[2]));
// //                 }else if(f1[2]/f1[2]%1 <0){
// //                     lower = f1[2]*f2[2];
// //                     upper = f1[1]*(f2[2])+(f2[1]*(f1[2]));
// //                 }
// //             }else if(f1[2] < f2[2]){
// //                 if(f2[2]/f1[2]%1 >0){
// //                     lower = f2[2];
// //                     upper = f2[1]+(f1[1]*(f2[2]/f2[2]));
// //                 }else if(f2[2]/f2[2]%1 <0){
// //                     lower = f2[2]*f1[2];
// //                     upper = f2[1]*(f1[2])+(f1[1]*(f2[2]));
// //                 }
// //             }
// //             cout << upper<< "/"<< lower << enld;
// //         }
// // }

// class Fraction(){
//     public:
//         int f1,f2;
//         Fraction operator+(const Fraction& other) const {
//             int newNumerator = f1 * other.f2 + other.f1 * f2;
//             int newDenominator = f2 * other.f2;
//             return Fraction(newNumerator, newDenominator);
//         }
//         Fraction operator-(const Fraction& other) const {
//             int newNumerator = f1 * other.f2 - other.f1 * f2;
//             int newDenominator = f2*other.f2;
//             return Fraction(newNumerator,newDenominator )
//         }
//         Fraction operator*(const Fraction& other) const {
//             int newNumerator = (f1 * other.f2) * (other.f1 * f2);
//             int newDenominator = f2*other.f2;
//             return Fraction(newNumerator,newDenominator )
//         }
//         Fraction operator/(const Fraction& other) const {
//             int newNumerator = (f1 * other.f2) / (other.f1 * f2);
//             int newDenominator = f2*other.f2;
//             return Fraction(newNumerator,newDenominator )
//         }
//         friend std::ostream& operator<<(std::ostream& os, const Fraction& c) {
//             os << c.f1 << "/"<< c.f2;
//             return os;
//     }
// }
// int main(){
//     Fraction f1,f2;
//     cout << "Enter first fraction (format a/b): ";
//     cin >> f1;
//     cout << "Enter second fraction (format a/b): ";
//     cin >> f2;
//     Fration
//     cout << "f1 + f2 = " << (f1 + f2) <<endl;
//     cout << "f1 - f2 = " << (f1 - f2) <<endl;
//     cout << "f1 * f2 = " << (f1 * f2) <<endl;
//     cout << "f1 / f2 = " << (f1 / f2) <<endl;

//     if (f1==f2){
//         cout << "f1 is equal to f2"<< endl;
//     }else if(f1 > f2){
//         cout << "f1 is greater than f2" << endl;
//     }else if (f1 < f2){
//         cout << "f1 is less than f2" <<endl;
//     }

// }

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
        os << c.f1 << "/" << c.f2;
        return os;
    }
};

int main() {
    Fraction f1, f2;
    std::istringstream iss(f1,f2);
    std::string token();
    std::vector<std::string> token;
    
    std::cout << "Enter first fraction (format a/b): ";
    std::cin >> f1.f1 >> f1.f2;
    std::cout << "Enter second fraction (format a/b): ";
    std::cin >> f2.f1 >> f2.f2;

    std::cout << "f1 + f2 = " << (f1 + f2) << std::endl;
    std::cout << "f1 - f2 = " << (f1 - f2) << std::endl;
    std::cout << "f1 * f2 = " << (f1 * f2) << std::endl;
    std::cout << "f1 / f2 = " << (f1 / f2) << std::endl;

    return 0;
}
