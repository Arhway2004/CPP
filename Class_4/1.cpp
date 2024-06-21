#include <iostream>
#include <vector>
// #include <list>

using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};
    cout << "Original squence: ";
    for(int num: vec){
        cout << num << " ";
    }
    cout << endl;

    // erase
    vec.erase(next(vec.begin(),0));
    vec.erase(next(vec.begin(),0));
    cout << "After lshift by 2: ";
    for(int num: vec){
        cout << num << " ";
    }
    cout << endl;
    vec.insert(vec.begin(),0);
    vec.insert(vec.begin(),0);
    cout << "After rshift by 3: ";
    for(int num: vec){
        cout << num << " ";
    }
    // 
    
    return 0;
}
