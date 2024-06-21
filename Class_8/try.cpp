// #include <iostream>
// using namespace std;

// int main(){
//     char s[3] = "dd";// if a 3 will just allow only 2 number
//     size_t sl = strlen(s);
//     cout << sl;
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

void mystery2(const char *s1, const char *s2) {
    if (s1 == NULL || s2 == NULL) {
        cout << "No" << endl;
        return;
    }

    size_t s1L = strlen(s1);
    size_t s2L = strlen(s2);
    size_t count = 0;

    for (size_t i = 0; i < s2L; ++i) {
        for (size_t j = 0; j < s1L; ++j) {
            if (s2[i] == s1[j]) {
                ++count;
                break; // Break inner loop if match is found
            }
        }
    }

    if (count == s2L) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    char string1[] = "hello world";
    char string2[] = "hOw";
    mystery2(string1, string2);

    return 0;
}
