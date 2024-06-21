#include <iostream>
#include <string>
using namespace std;

class Account{
public:
    void setName(string accountName){
        name = accountName;
    }
    string getName() const{
        return name;
    }
private:
    string name;

};

int main(){
    Account myAccount;
    myAccount.setName("Joe Doe");
    cout << "Account Name: " << myAccount.getName();
    return 0;
}