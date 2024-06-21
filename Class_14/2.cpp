#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <iomanip>

// Function to calculate mean
double calculateMean(const std::vector<double>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();//sum=0.0
}

// Function to calculate median
double calculateMedian(std::vector<double> numbers) {
    size_t size = numbers.size();
    std::sort(numbers.begin(), numbers.end());
    if (size % 2 == 0) {
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    } else {
        return numbers[size / 2];
    }
}

// Function to calculate standard deviation
double calculateStandardDeviation(const std::vector<double>& numbers, double mean) {
    double sum = 0.0;
    for (double num : numbers) {
        sum += (num - mean) * (num - mean);
    }
    return std::sqrt(sum / numbers.size());
}

int main() {
    std::vector<double> numbers;
    double num;

    std::cout << "Enter numbers (end with a non-numeric character): ";
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    if (!numbers.empty()) {
        double mean = calculateMean(numbers);
        double median = calculateMedian(numbers);
        double stddev = calculateStandardDeviation(numbers, mean);
        double min = *std::min_element(numbers.begin(), numbers.end());
        double max = *std::max_element(numbers.begin(), numbers.end());

        // Set precision to 2 decimal places
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Mean: " << mean << std::endl;
        std::cout << "Median: " << median << std::endl;
        std::cout << "Standard Deviation: " << stddev << std::endl;
        std::cout << "Minimum: " << min << std::endl;
        std::cout << "Maximum: " << max << std::endl;
    } else {
        std::cout << "No numbers were entered." << std::endl;
    }

    return 0;
}
