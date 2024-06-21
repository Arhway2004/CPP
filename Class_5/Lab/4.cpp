#include <iostream>
#include <string>

class cal {
private:
    std::string first_name;
    std::string last_name;
    int birth_year;
    int birth_month;
    int birth_day;
    int age;
    int heart_beats;
    std::string heart_rate;

public:
    // Constructor that takes parameters to initialize data members
    cal(std::string Fname, std::string Lname, int year, int month, int day) {
        first_name = Fname;
        last_name = Lname;
        birth_year = year;
        birth_month = month;
        birth_day = day;
        age = birth();
        heart_beats = Max();
        heart_rate = Range();
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
        return std::to_string(min) + "-" + std::to_string(max);
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

    cal calculator(Fname, Lname, year, month, day);

    std::cout << "Hello, "<< calculator.birth() << " "<<"years old" << " " << Fname << " " << Lname << ".\n";
    std::cout << "Your maximum heart rate should be " << calculator.Max() << " beats per minute.\n";
    std::cout << "Your target heart rate range is " << calculator.Range() << " beats per minute\n";

    return 0;
}
