#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;
void remove_negative(double vec){
    if (vec >0){
        cout << vec << " ";
    }

}

int main(){
    list<double> lis = {0.8, -5.1, 1.6, -6.5, 10.5};cout << "Original squence: ";
    // vector<double> new_vec = {};
    cout << "Original list: ";
    for(double num: lis){
        cout << num << " ";
    }
    cout << endl;
    cout << "List after removing negative number: ";
    for(double num:lis){
        remove_negative(num);
    }

    // for(double num: vec){
    //     new_vec.push_back(remove_negative(num));
    // }
    // for(double num: new_vec){
    //     cout << num << " ";
    // }
    // cout << endl;
    return 0;

}