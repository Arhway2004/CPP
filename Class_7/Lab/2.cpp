// #include <iostream>

// // int re(int input){
// //     int largest ;
// //     if(input > 0){
// //         if(input > largest){
// //             largest = input;
// //         }
// //         return largest 
// //     }
// // }
// int main(){
//     // int count;
//     int a;
//     std::cout << "Generated 10 random integers between 1 and 100: ";
//     std::cin >> a; 
//     int n[10];
//     for (int i =0; i < 10; i++){
//         n[i] = rand()%a+1;
//         std::cout << n[i]<<" " ;
//     }
//     std::cout << std::endl;
//     std::cout << n <<std::endl;
//     // int count =n[0];
//     // if (){

//     // }
//     // std::cout << count ;
//     return 0;
// }

#include <iostream>
#include <array>
#include <algorithm>

int re(const std::array<int,10>& arr, const size_t n =10){
    if(n==1){
        return arr[0];
    }
    return std::max(arr[n-1],re(arr,n-1));

}
int main(){
    const size_t ran =10;// const is nessary whne use size_t
    std::array<int,ran> n;
    std::cout << "Generated 10 random integers between 1 and 100: "<<std::endl;
    for(int i=0;i<ran;++i ){
        n[i]=rand()%100+1;
        std::cout << n[i]<< " ";
    }
    std::cout << std::endl;
    // int num = re(n,ran);
    std::cout << "The largest element in the array is: "<<re(n,ran);

    // for(int i=0; i<10;++i){
    //     std::cout << n[i] << std::endl; 
    // }

    return 0;
}