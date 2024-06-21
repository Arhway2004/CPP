#include <iostream>
#include <string>

class SQG{
private:
    std::string question;
    std::string OPA;
    std::string OPB;
    std::string OPC;
    char Correct;

public:
    SQG(std::string q ,std::string a, std::string b, std::string c ,char co)
    : question(q), OPA(a), OPB(b), OPC(c), Correct(co){}

    void display(int que){
        std::cout << question << std::endl;
        std::cout << "a. "<< OPA  << std::endl;
        std::cout << "b. "<< OPB << std::endl;
        std::cout << "c. "<< OPC << std::endl;
    }

    bool checkAnswer(char answer){
        return answer == Correct;
    }
};

int main(){
    int score =0;
    SQG questions[5] = {
        SQG("What is the capital of France?", "Berlin", "Paris","London", 'b'),
        SQG("Which planet is known as the Red Planet?", "Mars", "Jupiter", "Saturn", 'a'),
        SQG("What is the largest mammal?",  "Elephant", "Blue Whale", "Giraffe", 'b'),
        SQG("Who wrote 'Hamlet'?",  "Mark Twain", "Charles Dickens", "William Shakespeare", 'c'),
        SQG("What is the chemical symbol for water?",  "H2O", "CO2", "O2", 'a'),
    };
    int i =0;
    while(i<5){
        questions[i].display(0);
        i++;
    }


}
