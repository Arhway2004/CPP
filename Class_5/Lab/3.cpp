// // #include <iostream>
// // #include <string>

// // int birth(int year, int month, int day){
// //     int age = 2023-year;
// //     if (month>=12 && day>=27){
// //         age++;
// //     }
// //     return age;
// // }

// // int Max(int age){
// //     int num = 220-age;

// //     return num;
// // }

// // std::string Range(int Max){
// //     int min = Max*0.50;
// //     int max = Max*0.85;
// //     std::range = std::to_string(min)+"-"+std::to_string(max);

// //     return range;
// // }

// // int main(){
// //     std::string Fname;
// //     std::string Lname;
// //     int year ;
// //     int month;
// //     int day;

// //     std::cout <<"Enter your first name: ";
// //     std::cin >> Fname;
// //     std::cout <<"Enter your last name: ";
// //     std::cin >> Lname;
// //     std::cout <<"Enter your birth year (YYYY): ";
// //     std::cin >> year;
// //     if (!std::cin){
// //         std::cout << "please entry number";
// //         return 1;
// //     }
// //     std::cout <<"Enter your birth month (MM): ";
// //     std::cin >> month;
// //     if (!std::cin){
// //         std::cout << "please entry number";
// //         return 1;
// //     }
// //     std::cout <<"Enter your birth day (DD): ";
// //     std::cin >> day;
// //     if (!std::cin){
// //         std::cout << "please entry number";
// //         return 1;
// //     }

// //     std::cout <<"Hello, " << birth(year,month,day) << "years old" << Fname << Lname << ".\n";
// //     std::cout <<"Your maximum heart rate should be" << Max(birth(year,month,day)) << "beats per minute. \n";
// //     std::cout <<"Your target heart rate range is" << Range(Max(birth(year,month,day))) << "beats per minute";
// //     return 0;
    
// // }

// #include <iostream>
// #include <string>
// class cal{
//     int birth(int year, int month, int day) {
//         int age = 2023 - year;
//         if (month >= 12 && day >= 27) {
//             age++;
//         }
//         return age;
//     }

//     int Max(int age) {
//         int num = 220 - age;
//         return num;
//     }

//     std::string Range(int Max) {
//         int min = Max * 0.50;
//         int max = Max * 0.85;
//         std::string range = std::to_string(min) + "-" + std::to_string(max);

//         return range;
//     }
// }


// int main() {
//     std::string Fname;
//     std::string Lname;
//     int year;
//     int month;
//     int day;

//     std::cout << "Enter your first name: ";
//     std::cin >> Fname;
//     std::cout << "Enter your last name: ";
//     std::cin >> Lname;
//     std::cout << "Enter your birth year (YYYY): ";
//     std::cin >> year;
//     if (!std::cin) {
//         std::cout << "Please enter a valid number for the year." << std::endl;
//         return 1;
//     }
//     std::cout << "Enter your birth month (MM): ";
//     std::cin >> month;
//     if (!std::cin) {
//         std::cout << "Please enter a valid number for the month." << std::endl;
//         return 1;
//     }
//     std::cout << "Enter your birth day (DD): ";
//     std::cin >> day;
//     if (!std::cin) {
//         std::cout << "Please enter a valid number for the day." << std::endl;
//         return 1;
//     }

//     std::cout << "Hello, " << birth(year, month, day) << " years old " << Fname << " " << Lname << ".\n";
//     std::cout << "Your maximum heart rate should be " << Max(birth(year, month, day)) << " beats per minute.\n";
//     std::cout << "Your target heart rate range is " << Range(Max(birth(year, month, day))) << " beats per minute\n";

//     return 0;
// }

#include <iostream>
#include <string>

class cal {
private:
    std::string first_name;
    std::string last_name
    int birth_year;
    int birth_month;
    int birth_day;

public:
    // Constructor that takes parameters to initialize data members
    cal(std::string Fname, std::string Lname, int year, int month, int day) {
        first_name = Fname;
        last_name = Lname
        birth_year = year;
        birth_month = month;
        birth_day = day;
    }

    int birth() {
        int age = 2023 - birth_year;
        if (birth_month >= 12 && birth_day >= 27) {
            age++;
        }
        return age;
    }

    int Max() {
        int age = birth();
        int num = 220 - age;
        return num;
    }

    std::string Range() {
        int max = Max();
        int min = max * 0.50;
        max = max * 0.85;
        std::string range = std::to_string(min) + "-" + std::to_string(max);
        return range;
    }


};

int main() {
    std::string Fname;
    std::string Lname;
    int year;
    int month;
    int day;

    std::cout << "Enter your first name: ";
    std::cin >> Fname;
    std::cout << "Enter your last name: ";
    std::cin >> Lname;
    std::cout << "Enter your birth year (YYYY): ";
    std::cin >> year;
    if (!std::cin) {
        std::cout << "Please enter a valid number for the year." << std::endl;
        return 1;
    }
    std::cout << "Enter your birth month (MM): ";
    std::cin >> month;
    if (!std::cin) {
        std::cout << "Please enter a valid number for the month." << std::endl;
        return 1;
    }
    std::cout << "Enter your birth day (DD): ";
    std::cin >> day;
    if (!std::cin) {
        std::cout << "Please enter a valid number for the day." << std::endl;
        return 1;
    }

    // Create an instance of the cal class and pass the birthdate to the constructor
    cal calculator(year, month, day);

    std::cout << "Hello, " << calculator.birth() << " years old " << Fname << " " << Lname << ".\n";
    std::cout << "Your maximum heart rate should be " << calculator.Max() << " beats per minute.\n";
    std::cout << "Your target heart rate range is " << calculator.Range() << " beats per minute\n";

    return 0;
}
