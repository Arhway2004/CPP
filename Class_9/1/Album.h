#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
#include <string>
using namespace std;

class Album{
private:
    static int totalAlbums;
    static double totalSales;
    string title;
    string artist;
    double price;
    int copiesAvailable;
public:
    Album(const string& title, const string& artist, double price, int copies):title(title),artist(artist),price(price),copiesAvailable(copies){
        totalAlbums += copies;
}    
    void purchasAlbum();
    void getTotalAlbums();
    static double getTotalSales();
    string GTT(){
        return title;
    }
    string GAT(){
        return artist;
    }
    double GP(){
        return price;
    }
    int GC(){

        return copiesAvailable;
    }
    
};
#endif
