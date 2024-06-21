#include <iostream>
using namespace std;

int main(){
    srand(time(0));
    for(int x=0;x<2;x++){
        cout << 1+ (rand() % 100)<<"\n"; 
    }
    return 0;
}