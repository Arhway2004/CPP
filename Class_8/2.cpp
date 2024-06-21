#include <iostream>
#include <array>
#include <string>
// #include <algotithm>
#include <algorithm> 
using namespace std;

array<int, 2> mystery3(const char*);
// void reverseString(char*);
char* reverseString(char*);

int main(){
    char string[80];
    cout << "Enter a string: ";
    cin >> string;
    if(strlen(string)>80){
        cout << "invalid input" << endl;
        exit(1);
    }else{
        cout << "Length of the string: " << mystery3(string)[0] << endl;
        cout << "Length of the string: " << mystery3(string)[1] << endl;
        cout << reverseString(string);
    }

    return 0;
}

array<int, 2> mystery3(const char*s){
    array<int,2>keep;
    unsigned int x;
    int Vcount = 0 ;
    for (x =0; *s != '\0'; ++s){
    // while (*s != '\0') {
        ++x;
        // if(*s[x] == 'A' ||*s[x] == 'E'|| *s[x] == 'I'||*s[x] == 'O'|| *s[x] =='U'|| *s[x] =='a'|| *s[x] =='e'|| *s[x] == 'i'|| *s[x] =='o'|| *s[x] =='u'){}//ไม่สังเกตุ
        if (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U' ||
            *s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u') {
            ++Vcount;  // Increment the vowel count when a vowel is found
        }
    }
    keep[0] = x;
    keep[1] = Vcount;
    // pair<int,int> result(keep[0],keep[1]);
    
    return keep;
}

// void reverseString(char*s){
//     char* begin = s;
//     char* end = s + strlen(s) -1;
//     // reverse(x.begin(), x.end());
//     while(begin < end) {
//         swap(*begin,*end);
//         ++begin;
//         --end;
//     }
//     cout << begin << endl;
//     // return x 
// }
char* reverseString(char*s){
    int x = strlen(s);
    for(int i=0 ; i<x/2 ; ++i){
        swap(s[i],s[x-1]);
        --x;
    }
    return s;
}