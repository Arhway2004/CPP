#include <iostream>
#include <string>
#include <vector>
using namepace std;

typedef struct Moive{
    string title;
    sting date;
    vector<vector<bool>> availableSeats;  //2D Vector 
} 

typedef struct Reservation{
    string customerName;
    string movieTitle;
    string date;
    int round;
    int seatNumber;
} RS

void displaySchedule(vector<Movie> movies);



int msin(){
    // char input;
    //Poor Thing
    // vector<Movie> M{{"Poor Thing"},{"Date: 2024-03-01"},{vector<vector<bool>>(4, vector<bool>(10, true))}};
    vector<Movie> M{{"Poor Thing"}, {"2024-03-01"}, {vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}}};
    vector<Movie> M{{"Poor Thing"},{"Date: 2024-03-02"},{vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true), vector<bool>(10, true)}}};
    vector<Movie> M{{"Poor Thing"},{"Date: 2024-03-03"},{{true},{true},{true},{true}}};
    //เหมรย
    vector<Movie> M{{"เหมรย"},{"Date: 2024-03-01"},{{true},{true},{true},{true}}};
    vector<Movie> M{{"เหมรย"},{"Date: 2024-03-02"},{{true},{true},{true},{true}}};
    vector<Movie> M{{"เหมรย"},{"Date: 2024-03-03"},{{true},{true},{true},{true}}};
    //4KingII
    vector<Movie> M{{"4KingII"},{"Date: 2024-03-01"},{{true},{true},{true},{true}}};
    vector<Movie> M{{"4KingII"},{"Date: 2024-03-02"},{{true},{true},{true},{true}}};
    vector<Movie> M{{"4KingII"},{"Date: 2024-03-03"},{{true},{true},{true},{true}}};

    while(true){
        char input;
        cout << "1. View Schedule" << endl;
        cout << "2. Make Reservation" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: Enter choice:"
        cin >> input;
        switch(input){
            case '1':

            case '2':

            case '3':
                false;
                break;
        }

    }
}

void displaySchedule(vector<Movie> movies){
    typedef movies M;
    for(int=1; i<=M.date.size(); ++i)
    if(i ==1){
        cout << "Movie: "<<M.title << endl;
        cout << M.date ;
        if(M.availableSeats ==true){
            cout << "12:00:"
        }
    }

}
