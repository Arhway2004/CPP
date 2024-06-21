#include <iostream>
using namespace std;

// base class
class animal {
    public:
    void animalSound() {
        cout<< "The animal makes a sound" << endl;
    }

};

// derive class
class Pig: public animal{
    public:
    void animalSound(){
        cout << "The pig says: wee wee "<<endl;
    }
};
// derive class
class Dog: public animal{
    public:
    void animalSound(){
        cout << "The dog says: bow wow"<<endl;
    }
};
int main(){
    animal myanimal;
    Pig mypig;
    Dog mydog;
    
    myanimal.animalSound();
    mypig.animalSound();
    mydog.animalSound();
}