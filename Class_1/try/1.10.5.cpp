#include <iostream>
using namespace std;

// class Instrment{
//     public:
//     virtual void MakeSound(){ //need virtual
//         cout << "Instrument playing..\n";
//     }
// };
class Instrment{
public:
virtual void MakeSound() = 0;
};

class Piano : public Instrment{
public:
void MakeSound(){
    cout <<"Piano playing..\n";
}
};

class Accordion: public Instrment{
public:
void MakeSound(){
    cout <<"Accordoing playing..\n";
    }// same as poly  sa  I feel and when not this message will show the upper one
};
int main(){
    Instrment* i1 = new Accordion();//* poiter
    // i1 -> MakeSound();// use this symbol to access
    Instrment* i2 =new Piano();
    // i1 -> MakeSound();
    Instrment* instrument[2] ={i1,i2};
    for(int i=0;i<2;i++){
        instrument[i]->MakeSound();
    }


    return 0;
}
