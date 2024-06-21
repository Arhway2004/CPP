// struct 
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   struct {
//     string brand;
//     string model;
//     int year;
//   } myCar1, myCar2; // We can add variables by separating them with a comma here

//   // Put data into the first structure
//   myCar1.brand = "BMW";
//   myCar1.model = "X5";
//   myCar1.year = 1999;

//   // Put data into the second structure
//   myCar2.brand = "Ford";
//   myCar2.model = "Mustang";
//   myCar2.year = 1969;

//   // Print the structure members
//   cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
//   cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
//   return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// // Declare a structure named "car"
// struct car {
//   string brand;
//   string model;
//   int year;
// };

// int main() {
//   // Create a car structure and store it in myCar1;
//   car myCar1;
//   myCar1.brand = "BMW";
//   myCar1.model = "X5";
//   myCar1.year = 1999;

//   // Create another car structure and store it in myCar2;
//   car myCar2;
//   myCar2.brand = "Ford";
//   myCar2.model = "Mustang";
//   myCar2.year = 1969;
 
//   // Print the structure members
//   cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
//   cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
//   return 0;
// }


// cheating 
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string food = "Pizza";
//   string &meal = food;

//   cout << food << "\n";
//   cout << meal << "\n";
//   return 0;
// }

// memory addrese will get 0x6dfed4
// int main() {
//   string food = "Pizza";

//   cout << &food;
//   return 0;
// }

// &reference *pointer
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   string food = "Pizza";  // A string variable
//   string* ptr = &food;  // A pointer variable that stores the address of food

//   // Output the value of food
//   cout << food << "\n";//pizza

//   // Output the memory address of food
//   cout << &food << "\n";//0x6dfed4

//   // Output the memory address of food with the pointer
//   cout << ptr << "\n";//0x6dfed4

  // cout << *ptr << "\n"; //pizza
//   return 0;
// }

// modify pointer value
#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string* ptr = &food;

  // Output the value of food
  cout << food << "\n";

  // Output the memory address of food
  cout << &food << "\n";

  // Access the memory address of food and output its value
  cout << *ptr << "\n";
  
  // Change the value of the pointer
  *ptr = "Hamburger";
  
  // Output the new value of the pointer
  cout << *ptr << "\n";
  
  // Output the new value of the food variable
  cout << food << "\n";
  return 0;
}
