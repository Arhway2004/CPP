#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    string data = "123 45.67 hello 678";
    istringstream iss(data);
    int intValue;
    double doubleValue;
    string stringValue;

    iss >> intValue;
    iss >> doubleValue;
    iss >> stringValue;

    cout << "Integer: " << intValue << "\n";
    cout << "Double: " << doubleValue << "\n";
    cout << "String:" << stringValue << "\n";
    return 0;
}

