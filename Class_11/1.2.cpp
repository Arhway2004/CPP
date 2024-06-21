// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// typedef struct Movie{
//     string title;
//     string date;
//     vector<vector<bool>> availableSeats;
// };

// typedef struct Reservation{
//     string customerName;
//     string movieTitle;
//     string date;
//     int round;
//     int seatNumber;
// };

// void displaySchedule(vector<Movie> M);



// int main(){
//     Movie = {
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
//     bool check =true;
//     while(check){
//         char input;
//         cout << "1. View Schedule" << endl;
//         cout << "2. Make Reservation" << endl;
//         cout << "3. Exit" << endl;
//         cout << "Enter choice:" << endl;
//         cin >> input;
//         switch(input){
//             case '1':
//                 displaySchedule(Movie);
//                 break;
//             case '2':
//                 break;
//             case '3':
//                 check = false;
//                 break;
//         }




//     }
// }
// void displaySchedule(vector<Movie> M){
//     for(int i =0; i<M.size(); i++){
//         if(i==1 || i==4 ||i==7){
//             cout << "Movie:" << M[i].title << endl;
//             cout << "Date:" << M[i].date << endl;
//             if(M[i].availableSeats[0][0] == true){
//                 cout << "Round 1: Available" << endl;
//             }
//         }else if(i==2 || i==5 ||i==8){
//             cout << "Date:" << M[i].date << endl;
//             if(M[i].availableSeats[0][0] == true){
//                 cout << "Round 2: Available" << endl;
//             }
//         }else if(i==3 || i==4 ||i==5){
//             cout << "Date:" << M[i].date << endl;
//             if(M[i].availableSeats[0][0] == true){
//                 cout << "Round 2: Available" << endl;
//             }
//         }
//     }
// }
// //