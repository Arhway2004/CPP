#include <iostream>
#include <string>
using namespace std;

float Fah(double number){
    double num = (number*5/9)+32;
    return num;
}

float Cel(double number){
    double num =(number-32)*5/9;
    return num;
}

int main(){
    string enter;
    while(enter != "N" && enter !="n"){
        int number;
        cout << "Enter a temperature: " ;
        cin >> number;
        string temp;
        cout << "Convert to (C)elsiusor (F)ahrenhei? Enter C or F :  " ;
        cin >> temp;
        if (temp == "C"|| temp == "c"){
            cout << number << " Fahrenhei is "<< Cel(number)<<" Celsiusor." <<"\n" ;
        }else if (temp == "F"||temp ==  "f"){
            cout << number <<" Celsiusor is " << Fah(number) << " Fahrenhei." <<"\n" ;
        }
        cout << "Do you want another conversion? (Y/N)\n" ;
        cin >> enter;
    }
    return 0;

}
