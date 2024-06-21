#include <iostream>
using namespace std;

// base class
class Vehicle{
    public:
    string brand ="Ford";
    void honk(){
        cout << "Tuut, tuut!"<< endl;
    }
};
// derived class
class Car: public Vehicle{
    public:
    string model = "Musang";

};
//  Mutilevel class
// (parent)
class MyClass{
    public:
    void myfunction(){
        cout << "Some content in parent class"<<endl;
    }
};
// (child)
class MyChild: public MyClass{

};
// (Grandchild)
class MyGrandChile: public MyChild{

};

// Mutiple
class MyOtherClass{
    public:
    void myOtherFuntion(){
        cout << "Some content in another class."<< endl;
    }
};

class MyChildClass: public MyClass, public MyOtherClass{

};

// Access specifiers
class Employee{
    protected:
    int salary ;
};

class Programmer: public Employee{
    public:
    int bonus;
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main(){
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " +myCar.model << endl;

    //(Mutilevel class still allow to call grandparent function)
    MyGrandChile myobj;
    myobj.myfunction();

    //(Mutiple derive from many parent class)
    MyChildClass myObj;
    myObj.myfunction();
    myObj.myOtherFuntion();

    // access
    Programmer Myobj;
    Myobj.setSalary(50000);
    Myobj.bonus =15000;
    cout << "Salary:" << Myobj.getSalary() << endl;
    cout << "Bonus:" << Myobj.bonus << endl; 

    return 0;
}


