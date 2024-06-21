#include <iostream>
#include <string>
using namespace std;

int re(const string word, const int count){
    if(count >= 0){
        // return;
        cout << word[count];
        re(word,count-1);

        // return word[cout] << re(word[-1],int cout-1);
    }
    // else{
    //     cout << word[cout];
    //     re(word,cout-1);
    // }
}
int main(){
    string word;
    cout << "Enter a string : ";
    // cin.getline(word);
    getline(cin,word);
    int count = word.length();
    re(word,count);
    // cout << word << endl;
    return 0;

}