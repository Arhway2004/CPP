#include "Album.h"
#include <iostream>
#include <string>
using namespace std;

int Album::totalAlbums =0;
double Album::totalSales =0.0;

void Album::purchasAlbum(){
    if(copiesAvailable >0){
        copiesAvailable--;
        totalAlbums--;
        totalSales+=price;

    }
}
void Album::getTotalAlbums(){
    cout << "Totle album in inventory: ";
}

double Album::getTotalSales(){
    return totalSales;
}