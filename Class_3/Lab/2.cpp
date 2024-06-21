#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int random(int N){
    srand(time(0));
    for(int x=0;x<1;x++){
        return 1+ (rand() % N); 
    }
    // return 0;
}
int main(){

    int count=1;
    int ran = random(100);
    int number;
    while((count <10 )|| (number = ran)){
        cout << "Guess the number (between 0 and 100):";
        cin >> number;
        if (number<ran){
            cout << "Higher than your number. Try again:"<< number << "\n";
        }else if (number > ran){
            cout << "Lower than your number. Try again:"<< number << "\n";
        }else if (number==ran){
            cout << "Congratulation! You win.";
            break;
        }
        ++count;
    }

}