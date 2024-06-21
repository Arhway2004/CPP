#include <iostream>
#include <array> 
#include <iomanip>

int main(){
    std::array<int,5> n ={1,2,3,4,2};
    for (size_t i{0}; i<n.size(); ++i){
        n[i] = 0;
    }
    std::cout << "element" << std::setw(10) << "value" << std::endl;
    for (size_t j{0}; j<n.size(); ++j){
        std::cout << std::setw(7) << std::setw(10) << n[j] << std::endl;
    }
}