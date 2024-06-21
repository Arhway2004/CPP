// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// typedef struct Movie {
//     string title;
//     string date;
//     vector<vector<bool>> availableSeats;
// } Movie;

// typedef struct Reservation {
//     string customerName;
//     string movieTitle;
//     string date;
//     int round;
//     int seatNumber;
// } Reservation;

// void displaySchedule(const vector<Movie>& M);
// void makeReservation(vector<Movie> &Movies); 

// int main() {
//     vector<Movie> movies = {
//         {"Poor Thing", "2024-03-01", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"Poor Thing", "2024-03-02", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"Poor Thing", "2024-03-03", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"เหมรย", "2024-03-01", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"เหมรย", "2024-03-02", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"เหมรย", "2024-03-03", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"4KingII", "2024-03-01", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"4KingII", "2024-03-02", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}},
//         {"4KingII", "2024-03-03", {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}}
//     };

//     bool check = true;
//     while (check) {
//         char input;
//         cout << "1. View Schedule" << endl;
//         cout << "2. Make Reservation" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter choice:" << endl;
//         cin >> input;
//         switch (input) {
//             case '1':
//                 displaySchedule(movies);
//                 break;
//             case '2':
//                 makeReservation(movies);
//                 break;
//             case '3':
//                 cout << "Exiting..." << endl;
//                 check = false;
//                 break;
//             default:
//                 cout << "Invalid choice. Please enter a valid option." << endl;
//         }
//     }

//     return 0;
// }

// void displaySchedule(const vector<Movie>& M) {
//     int i = 0;
//     for (const auto& movie : M) {

//         if(i==0||i==3||i==6){
//             cout << "Movie: " << movie.title <<endl;
//         }
//         i++;

//         for (int i = 0; i < movie.availableSeats.size(); ++i) {
//             cout << "Date: "<<movie.date << "     ";
//             cout << "12:00" << ": ";

//             cout << "Round" << i + 1 << ": ";
//             bool available = false;
//             for (const auto& seat : movie.availableSeats[i]) {
//                 if (seat) {
//                     available = true;
//                     break;
//                 }
//             }
//             cout << (available ? "Available" : "Not Available") << "    ";
//         }
//         cout << endl;
//     }
// }

// void makeReservation(vector<Movie> &Movies) {
//     int movieIndex, dateIndex, roundIndex;
//     cout << "Select a movie: " << endl;
//     for (int i = 0; i < Movies.size(); i += 3) { 
//         cout << (i / 3) + 1 << ") " << Movies[i].title << endl;
//     }
//     cout << "Enter movie number: ";
//     cin >> movieIndex;
//     movieIndex = (movieIndex - 1) * 3; 
//     cout << "Select a date: " << endl;
//     for (int i = 0; i < 3; ++i) {
//         cout << i + 1 << ") " << Movies[movieIndex + i].date << endl;
//     }
//     cout << "Enter date number: ";
//     cin >> dateIndex;
//     int selectedMovieIndex = movieIndex + (dateIndex - 1); 
//     cout << "Select a round: " << endl;
//     for (int i = 0; i < Movies[selectedMovieIndex].availableSeats.size(); ++i) {
//         cout << i + 1 << ") Round " << i + 1 << " has " << Movies[selectedMovieIndex].availableSeats[i].size() << " seats available." << endl;
//     }
//     cout << "Enter round number: ";
// }



// //