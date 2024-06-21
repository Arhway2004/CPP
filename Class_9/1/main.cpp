#include <iostream>
#include <vector>
#include "Album.h"
using namespace std;

int main(){
    vector<Album> albums;
    albums.emplace_back("Abbey Road", "The Beatles", 19.99,5);
    albums.emplace_back("The Dark Side of the Moon", "Pink Floyd", 21.99, 3);
    albums.emplace_back("Hotel California", "Eagles", 15.99, 4);
    albums.emplace_back("Back in Black", "AC/DC", 20.99, 2);
    albums.emplace_back("Rumours", "Fleetwood Mac", 16.99, 3);
    albums.emplace_back("Thriller", "Michael Jackson", 18.99, 5);
    albums.emplace_back("The Wall", "Pink Floyd", 22.99, 2);
    albums.emplace_back("Led Zeppelin IV", "Led Zeppelin", 17.99, 3);
    char loop= true;
    while(loop){
        char choose;
        cout << "Online Music Store Menu: \n";
        cout << "1 List all albums \n";
        cout << "2 Purchase an album \n";
        cout << "3 View total albums in stock" << endl;
        cout << "4 Exit \n";
        cout << "Enter your choice: ";
        cin >> choose;
        switch(choose){
            case '1':
                for (int i =0; i< albums.size();++i){
                    cout << i << ". "<< albums[i].GTT()<< " by " << albums[i].GAT() << " - $" << albums[i].GP() << " (" << albums[i].GC() << "copies available)" << endl;
                }
                break;
            case '2':
                int num1;
                cout << "Please enter the albums: "<< endl;
                cin >> num1;
                albums[num1-1].purchasAlbum();
                break;
            case '3':
                cout << "Total albums in stock: " << Album::getTotalSales() << endl;
                break;
            case '4':
                cout << "Thank you for using the Online Music Store.";
                loop =false;
                break;
            default:
                cout << "Invalid choicef. Please try again.";
                break;

        }
    }
    return 0;

}