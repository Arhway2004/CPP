// #include <iostream>
// #include <string>
// #include <vector>
// #include <limits>


// class Book {
//     public:
//         std::string title, author;
//         int quantity;

//     void setTitle() {
//         while (true) {
//             std::cout << "Enter title: ";
//             std::getline(std::cin, title);
//             if (!title.empty()) {
//                 break;
//             } else {
//                 std::cout << "Title cannot be empty. Please enter a valid title." << std::endl;
//             }
//         }
//     }

//     void setAuthor() {
//         while (true) {
//             std::cout << "Enter author: ";
//             std::getline(std::cin, author);
//             if (!author.empty()) {
//                 break;
//             } else {
//                 std::cout << "Author cannot be empty. Please enter a valid author name." << std::endl;
//             }
//         }
//     }


//         void setQuantity() {
//             while (true) {
//                 std::cout << "Enter quantity: ";
//                 if (std::cin >> quantity) {
//                     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//                     break;
//                 } else {
//                     std::cout << "Invalid input. Please enter a numeric value." << std::endl;
//                     std::cin.clear();
//                     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
//                 }
//             }
//         }


//         void printDetails() const {
//             std::cout << "Title: " << title << " Author: " << author << " Quantity: " << quantity << std::endl;
//         }
// };

// class Inventory {
//     private:
//         std::vector<Book> books;

//     public:
    
//     void addBook() {
//             Book myBook;
//             myBook.setTitle();
//             myBook.setAuthor();
//             myBook.setQuantity();

//             books.push_back(myBook);
//         }

//     void removeBook() {
//         std::string titleToRemove;
//         std::cout << "Enter the title of the book to remove: ";
//         std::getline(std::cin, titleToRemove);

//         bool found = false;
//         for (auto it = books.begin(); it != books.end();) {
//             if (it->title == titleToRemove) {
//                 it = books.erase(it);
//                 found = true;
//             } else {
//                 ++it;
//             }
//         }

//         if (found) {
//             std::cout << "Book removed from inventory.\n";
//         } else {
//             std::cout << "Book not found in inventory.\n";
//         }
//     }


//     void findBook() {
//             std::string input;
//             std::cout << "Enter title to find: ";
//             std::getline(std::cin, input);

//             for (const auto& book : books) {
//                 if (book.title == input) {
//                     book.printDetails();
//                     return;
//                 }
//             }

//             std::cout << "Book not found." << std::endl;
//         }

//         void printInventory() {
//         if (books.empty()) {
//             std::cout << "Inventory is empty.\n";
//         } 
//         else {for (const auto& book : books) {
//                 book.printDetails();
//             }}
//         }
// };

// int main() {
//     Inventory inventory;
//     char choice;

//     while (true) {
//         std::cout << "Enter command (a: add, r: remove, s:search, l: list, q: quit): ";
//         std::cin >> choice;
//         std::cin.ignore();

//         if (choice == 'a') {
//             inventory.addBook();
//         } else if (choice == 'r') {
//             inventory.removeBook();
//         } else if (choice == 's') {
//             inventory.findBook();
//         } else if (choice == 'l') {
//             inventory.printInventory();
//         } else if (choice == 'q') {
//             std::cout << "Exiting program.\n";
//             return 0;
//         } else {
//             std::cout << "Invalid choice. Try again.\n";
//         }
//     }
// }

#include <iostream>
#include <string>
#include <vector>

class Book {
    private:
        std::string title;
        std::string author;
        int quantity;

    public:
        Book(std::string title, std::string author, int quantity) : title(title), author(author), quantity(quantity) {}

        std::string Gettitle() {
            return title;
        }

        std::string Getauthor() {
            return author;
        }

        int Getquantity() {
            return quantity;
        }

        void Settitle(std::string title) {
            this->title = title;
        }

        void Setauthor(std::string author) {
            this->author = author;
        }

        void Setquantity(int quantity) {
            this->quantity = quantity;
        }

};

class Inventory {

    private:
        std::vector<Book> books;

    public:

        void AddBook(Book book) {
            books.push_back(book);
        }

        void removeBook(Book book) {
            int count = 0;
            for (Book element : books) {
                if (element.Gettitle() == book.Gettitle()) {
                    books.erase(books.begin() + count);

                }
                count++;
            }

        }

        void findBook(std::string title) {
            for (int i = 0; i <= books.size(); i++) {
                if (i == books.size()) {
                    std::cout << "Book not found." << std::endl;
                    break;
                }
                else if (books[i].Gettitle() == title) {
                    std::cout << "Book found: " << books[i].Gettitle() << ", " << books[i].Getauthor() << ", " << books[i].Getquantity() << std::endl;
                    break;
                }
            }
        }

        void printInventory() {
            for (Book element : books) {
                std::cout << "Title: " << element.Gettitle() << ", Author: " << element.Getauthor() << ", Quantity: " << element.Getquantity() << std::endl;
            }

        }


};

int main() {
    
    Inventory inventory;
    bool quit = true;
    
    while (quit) {

        std::cout << "Enter command (a: add, s:search, l: list, q: quit): ";
        char command;
        std::cin >> command;

        switch(command) {
            case 'a' :{
                std::cout << "Enter title: ";
                std::string title;
                std::getline(std::cin >> std::ws, title);

                std::cout << "Enter author: ";
                std::string author;
                std::getline(std::cin >> std::ws, author);

                std::cout << "Enter quantity: ";
                std::string quantity_string;
                int quantity;

                std::getline(std::cin >> std::ws, quantity_string);
                bool is_number = true;
                for (char element : quantity_string) {
                    if (!isdigit(element)) {
                        is_number = false;
                        break;
                    }
                }
                if (is_number) {
                    quantity = std::stoi(quantity_string);
                }
                else {
                    std::cout << "Invalid quantity, please enter a whole number only" << std::endl;
                    break;
                }

                Book book(title, author, quantity);
                inventory.AddBook(book);

                break;

            }
            case 's' : {
                std::cout << "Enter title to search: ";
                std::string title;
                std::cin >> title;
                inventory.findBook(title);

                break;
            }
            case 'l' : {
                inventory.printInventory();
                break;
            }
            case 'q' : {
                quit = false;
                break;
            }
            default: {
                std::cout << "Invalid command " << command << std::endl;
                break;
            }


        }



    }

    return 0;
}