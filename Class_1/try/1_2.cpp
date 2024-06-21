// string
#include <iostream>
#include <string>
using namespace std;


int main(){
    string firstName = "Arhway";
    string lastName = "Larhuna";
    string fullName1 = firstName + " " + lastName;
    string fullName2 = firstName.append(lastName);
    cout << fullName1 <<"\n" << fullName2;

    string txt1 = "We are the so-called \"Vikings\" from the north.";
    string  txt2 = "It\'s alright.";
    string txt3 = "The character \\ is called backslash.";
    cout << txt1 <<"\n"<< txt2 <<"\n"<< txt3;// new line =\n tab =\t
    return 0;
}
// length() or size()

// string myString = "Hello";
// myString[0] = 'J';
// cout << myString;
// // Outputs Jello instead of Hello
