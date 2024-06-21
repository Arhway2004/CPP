#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // Remove the last element from the vector
    // vec.erase(next(vec.begin(),1),next(vec.begin(),0));
    



    // Display the modified vector
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}