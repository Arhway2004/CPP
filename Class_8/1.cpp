#include <iostream>
#include <string>
using namespace std;

void mystery1(char *s1, const char *s2, size_t s1Buffersize);
void mystery2(char *s1, const char *s2);


int main(){
    char string1[80];
    char string2[80];


    cout << "case 1 Normal concat: Enter two string: ";
    cin >> string1 >> string2;
    mystery1(string1, string2, sizeof(string1));// sizeof 不可以pointer 到另一个*值
    cout << string1 << endl;

    cout << "case 2 Overflow space for concatenation: Enter two string: ";
    cin >> string1 >> string2;
    mystery1(string1, string2, sizeof(string1));// sizeof 不可以pointer 到另一个*值
    cout << string1 << endl;

    cout << "Enter two string: ";
    cin >> string1 >> string2;
    mystery2(string1, string2);// sizeof 不可以pointer 到另一个*值
    cout << endl;

    cout << "Enter two string: ";
    cin >> string1 >> string2;
    mystery2(string1, string2);// sizeof 不可以pointer 到另一个*值
    cout << endl;
    
    return 0;


}


void mystery1(char *s1, const char *s2, size_t s1Buffersize){
    size_t s1L = strlen(s1);
    size_t s2L = strlen(s2);
    if(s1 == NULL || s2 == NULL){
        return;// only return will give null
    }
    if(s1L + s2L + 1 > s1Buffersize){
        cout << "Error: Insuddicient space for concatenation ";
        return;
    }
    while(*s1 != '\0') ++s1; // \0 is mean the last number in the pointer
    for (; (*s1 = *s2); ++s1, ++s2);
}

void mystery2(char *s1, const char *s2){
    int count = 0;
    int s1L = strlen(s1);
    int s2L = strlen(s2);
    for (int i =0; i < s2L; i++){
        for (int j =0; j < s1L;j++){
            if(s2[i] == s1[j]){//here have been error wrong size
                ++count;
                break;
            }else{
                count = 0;
            }
        }
    }
    if (count == s2L){
        cout << "Yes" << count << " "<< s2L<< endl;
    }else{
        cout << "No" << count << s2L<< endl;
    }

}

/*void mystery1(char *s1, const char *s2, size_t max_len) {
    if (s1 == NULL || s2 == NULL) {
        return; // 如果任一字符串是空指针，直接返回
    }

    while (*s1 != '\0' && max_len > 0) {
        ++s1;
        --max_len; // 减少可用长度
    }

    for (; (*s1 = *s2) && max_len > 0; ++s1, ++s2, --max_len);
}*/ //good caode example