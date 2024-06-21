#include <iostream>// for allow user to input and output as cout
// using namespace std;//can use names for objects and variables from the standard library

int main(){
    int myNum = 15;
    std::cout << "Hello\n";// cout is object and << is print
    std::cout << "Hi\n";
    std::cout << myNum << "\n";
    myNum = 10;
    int myNum1 = 12;
    std::cout << myNum+myNum1<<"\n";
    int sum = myNum+myNum1;
    std::cout <<sum<<"\n";
    std::cout << myNum;
    int x = 5, y = 6, z = 50;
    std::cout << x << y << z ; 

    return 0;
    // int myNum = 5;               // Integer (whole number without decimals)
    // double myFloatNum = 5.99;    // Floating point number (with decimals)
    // char myLetter = 'D';         // Character
    // string myText = "Hello";     // String (text)
    // bool myBoolean = true;       // Boolean (true or false)

}