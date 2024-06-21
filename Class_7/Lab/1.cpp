#include <iostream>
#include <random>

int main() {
    // Create a random device and use it to generate a seed for the random engine
    std::random_device rd;
    std::mt19937 eng(rd()); // Mersenne Twister engine

    // Define the range of numbers you want, here it's between 1 and 10
    std::uniform_int_distribution<> distr(1, 10);

    // Generate and print out 5 random numbers
    for (int i = 0; i < 5; ++i) {
        std::cout << distr(eng) << ' ';
    }
    std::cout << std::endl;

    return 0;
}
