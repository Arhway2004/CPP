#include <iostream>

// class cal{
//     public:
//         cal(int NB, int IP){
//             number = NB;
//             input =IP;
//         }
//     private:
//         int number;
//         int input;

// };

int main(){
    int NB;
    int IP;
    int KP;
    std::cout << "Enter the number of integers: ";
    std::cin >> NB;
    if (!std::cin || NB<=0){
        std::cout<<"Please enter a valid number";
        return 1;
    }
    std::cout << "Enter integers: " << "\n";
    for(int i=0; i<NB;i++){
        std::cin >> IP;
        if (!std::cin){
            std::cout<<"Please enter a number";
            return 1;
        }
        if(i==0){
            if(IP<0){
                std::cout<<"First input unable to less than 0";
                return 1; 
            }else{
                KP = IP;
            }

        }
        if (IP < KP){
            KP=IP;
        }
    }
    std::cout <<"The smallest integer is: "<< KP<<std::endl;
    return 0;

    // }else if (IP.length != NB)
}