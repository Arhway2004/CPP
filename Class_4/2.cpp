#include <iostream>
#include <vector>
#include <string>
using namespace std;
void remove_negative(double vec){
    if (vec >0){
        cout << vec << " ";
    }

    // return empty;
}

int main(){
    vector<double> vec = {0.8, -5.1, 1.6, -6.5, 10.5};cout << "Original squence: ";
    // vector<double> new_vec = {};
    cout << "Original vector: ";
    for(double num: vec){
        cout << num << " ";
    }
    cout << endl;
    cout << "Vector after removing negative number: ";
    for(double num:vec){
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