// #include <iostream>
// #include <vector>

// char patternCheck(char ch, const std::vector<std::vector<char>>& charVector) {
//     bool isHorizontal, isVertical, isDiagonalLR, isDiagonalRL;
//     isHorizontal = isVertical = isDiagonalLR = isDiagonalRL = true;
//     int horizontalCount = 0, verticalCount[4] = {0}, diagLRCount = 0, diagRLCount = 0;
//     int totalCount = 0;
    
//     for (int i = 0; i < 4; ++i) {
//         isHorizontal = true;
//         for (int j = 0; j < 4; ++j) {
//             if (charVector[i][j] != ch) isHorizontal = false;
//             else horizontalCount++;
//             if (charVector[j][i] == ch) verticalCount[i]++;
//             if (i == j && charVector[i][j] != ch) isDiagonalLR = false;
//             if (i == j && charVector[i][j] == ch) diagLRCount++;
//             if (i + j == 3 && charVector[i][j] != ch) isDiagonalRL = false;
//             if (i + j == 3 && charVector[i][j] == ch) diagRLCount++;
//         }
//         if (isHorizontal && horizontalCount == 4) return '-';
//     }

//     for (int i = 0; i < 4; ++i) {
//         if (verticalCount[i] == 4) return '|';
//     }

//     if (isDiagonalLR && diagLRCount == 4) return '\\';
//     if (isDiagonalRL && diagRLCount == 4) return '/';

//     totalCount = horizontalCount + verticalCount[0] + verticalCount[1] + verticalCount[2] + verticalCount[3] + diagLRCount + diagRLCount;
//     if (totalCount != 4) return 'n';
    
//     return 'n';
// }

// int main() {
//     std::vector<std::vector<char>> charVector = {
//         {'a', 'a', 'a', 'a'},
//         {'a', 'a', 'b', 'a'},
//         {'a', 'a', 'c', 'a'},
//         {'a', 'b', 'b', 'b'}
//     };

//     char result = patternCheck('a', charVector);
//     std::cout << "Pattern is: " << result << std::endl;

//     return 0;
// }

#include <iostream>
#include <vector>

char patternCheck(char ch, const std::vector<std::vector<char>>& charVector) {
    int rowCount[4] = {}, colCount[4] = {}, diagCount[2] = {};
    
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            rowCount[i] += charVector[i][j] == ch;
            colCount[j] += charVector[i][j] == ch;
            if (i == j) diagCount[0] += charVector[i][j] == ch;
            if (i + j == 3) diagCount[1] += charVector[i][j] == ch;
        }
    }
    for (int i = 0; i < 4; ++i) {
        if (rowCount[i] == 4) return '-';
        if (colCount[i] == 4) return '|';
    }
    if (diagCount[0] == 4) return '\\';
    if (diagCount[1] == 4) return '/';

    int total = diagCount[0] + diagCount[1];
    for (int i = 0; i < 4; ++i) {
        total += rowCount[i] + colCount[i];
    }
    if (total != 4 * 4) return 'n'; 

    return 'n'; 
}
int main() {
    std::vector<std::vector<char>> charVector = {
        {'a', 'a', 'a', 'a'},
        {'a', 'c', 'c', 'd'},
        {'a', 'b', 'd', 'a'},
        {'a', 'c', 'b', 'a'}
    };

    char result = patternCheck('a', charVector);
    std::cout << "Pattern is: " << result << std::endl;

    return 0;
}
