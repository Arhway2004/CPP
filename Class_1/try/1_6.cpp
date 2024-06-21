#include <iostream>

using namespace std;
// Switch
// int main(){
//     int day = 9;
//     switch(day){
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6 :
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "Out of weekly";
//     return 0;
//     }
// }

// Loop while, do_while , for, foresh loop, break, continue
// while
// int main(){
//     int x =5;
//     while(x<5){
//         cout << x << "\n";
//         ++x;
//     }

// }
// do while
// int main(){
//     int i =0;
//     do{
//         cout << i << "\n";
//         i++;
//     }
//     while(i<5);
//     return 0;
// }
// while and do while differce is if x= 5 will empty but do while i =5 will get 5 like do one time before check

// for loop
// int main(){
//     // int x= 5;
//     for (int x = 1; x<5 ; ++x){
//         cout << x << "\n";
//         for (int y =1; y<5; y+=2){
//             cout << y << "\n";
//         }
//     }

//     int x=1;
//     for (; x<5 ;x+=2){
//         cout << x << "\n";
//     }
//     return 0;
// }

//foreach Loop
int main(){
    int x[5] = {10,20,30,40,50};
    for (int i : x){
        cout << i << "\n";
    }
    return 0;
}
