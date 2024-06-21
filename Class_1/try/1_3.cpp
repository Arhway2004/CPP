#include <iostream>
#include <string>
using namespace std;

int main(){
    // string firstName;
    // cout << "Type your first name: ";
    // cin >> firstName; // get user input from the keyboard
    // cout << "Your name is: " << firstName;
    // cin can only store a single word and not allow to  use white space when input
    string fullName1;
    cout << "Type your full name: ";
    getline (cin, fullName1);
    cout << "Your name is: " << fullName1;   
    // will allow to write a full name like Mr. Arhway Larhuna
    return 0;
}
