#include <iostream>
#include <string>
using namespace std;

// int main(){
//     int x = 50;
//     int y = 100;
//     if  (x>y){
//         cout << 100;
//     }
//     else{
//         cout <<5;
//     }
//     return 0;

// }
int main(){
    int x =100;
    int y =21;
    int z =21;
    string result = (x>y) ? to_string(x): (x<y)? to_string(y): (x>z)? to_string(x) : to_string(3);
    cout << result;

    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int x = /* some value */;
//     int y = /* some value */;
//     int z = /* some value */;

//     // Assuming you want to return the largest value or "IDK" if they are equal
//     string result = (x > y && x > z) ? to_string(x) : 
//                     (y > x && y > z) ? to_string(y) : 
//                     (z > x && z > y) ? to_string(z) : "IDK";
//     cout << result;
//     return 0;
// }
