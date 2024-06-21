#include <iostream>
using namespace std;

// void myfunction(){
//     cout << "I just got executed!";
// }

// int main(){
//     myfunction();
//     return 0;
// }

// Function declaration  return type, the name of the function, and parameters
// void myFunction();

// // The main method
// int main() {
//   myFunction();  // call the function
//   myFunction1();
//   return 0;
// }

// // Function definition body of the function (code to be executed)
// void myFunction() {
//   cout << "I just got executed!";
// }

// void myFunction1(){
//     cout << "will not allow to call because it should before main";
// }

// void myFunction(string fname ="Arhway",int age = 43) {
//   cout << fname << " "<< age << " Refsnes\n";
// }

// int main() {
//   myFunction("Liam",32);
//   myFunction("Jenny",23);
//   myFunction("Anja",43);
//   myFunction();
//   return 0;
// }

// int myFunction(int x, int y) {
//   return x + y + 5;
// }

// int main() {
//   cout << myFunction(5, 3);
//   return 0;
// }

// swap
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}

// pass array
void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {  
    cout << myNumbers[i] << "\n";    
  } 
}

int main() {  
  int myNumbers[5] = {10, 20, 30, 40, 50};  
  myFunction(myNumbers);
  return 0;
}  
// function overload like have call the same parameter but differen function

// recurtion
int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

int main() {
  int result = sum(10);
  cout << result;
  return 0;
}
// void for not return cvalue int for need return value
