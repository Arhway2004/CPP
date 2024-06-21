// // // #include <iostream>
// // // #include <fstream>
// // // #include <string>
// // // #include <vector>
// // // #include <algorithm>
// // // using namespace std;

// // // class Mapper {
// // // private:
    
// // // public:
// // //     Mapper(){}
// // //     string track(string){
// // //         string s;
// // //         stringstream ss(s);
// // //         vector<string> v;
// // //         while (getline(ss,s,' ')){
// // //             v.push_back(s);
// // //         }
// // //         for (int i =0; i< v.size(); i++){
// // //             // cout << v[i] << endl;
// // //             return v[i];
// // //         }
// // //     }
// // //     void map(string){
// // //         // track(string);
// // //     }
// // // };
// // // int main(){
// // //     Mapper m;
// // //     fstream file;
// // //     file.open("../Class_14/text_1.txt", ios::in);
// // //     // cout << file << endl;
// // //     if(file.is_open()){
// // //         string tp;
// // //         while(getline(file, tp)){
// // //             cout << tp << "\n";
// // //             m.track(tp);

// // //         }
// // //     }
// // //     file.close();

// // // }
// // #include <iostream>
// // #include <fstream>
// // #include <sstream>
// // #include <string>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // class Mapper {
// // public:
// //     Mapper() {}

// //     void track(const string& line) {
// //         stringstream ss(line);
// //         string word;
// //         while (ss >> word) {
// //             // Process the word here
// //             cout << word << endl;
// //         }
// //     }

// //     void map(const string& filename) {
// //         ifstream file(filename);
// //         if (file.is_open()) {
// //             string line;
// //             while (getline(file, line)) {
// //                 track(line);
// //             }
// //             file.close();
// //         } else {
// //             cerr << "Unable to open file: " << filename << endl;
// //         }
// //     }
// //     void pair(const string& filename){
// //         map(const string& filename);
// //         vector<string> text;
// //         int count=1;
// //         for(int i = 0; i < map.size(); i++{
// //             if(map[i] !in text){
// //                 text.push_back(map[i]);
// //             }else if((map[i] in text){
// //                 text[i].push_back(count;
// //             }
// //         }
// //     }
// // };

// // int main() {
// //     Mapper mapper;
// //     string filename = "../Class_14/text_1.txt";
// //     mapper.map(filename);
// //     return 0;
// // }
// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <map>

// using namespace std;

// class Mapper {
// public:
//     Mapper() {}

//     void track(const string& line, map<string, int>& wordCount) {
//         stringstream ss(line);
//         string word;
//         while (ss >> word) {
//             // Process the word here
//             wordCount[word]++;
//         }
//     }

//     void process(const string& filename, map<string, int>& wordCount) {
//         ifstream file(filename);
//         if (file.is_open()) {
//             string line;
//             while (getline(file, line)) {
//                 track(line, wordCount);
//             }
//             file.close();
//         } else {
//             cerr << "Unable to open file: " << filename << endl;
//         }
//     }

//     void pair(const string& filename) {
//         map<string, int> wordCount;
//         process(filename, wordCount);

//         // Output word count pairs
//         for (const auto& pair : wordCount) {
//             cout << pair.first << ": " << pair.second << endl;
//         }
//     }
//     void output(const string& filename, const string& outputfile){
//         pair(filename);
//         ofstream file(outputfile);
//         // ifstream file(filename, ios::out);
//         if (file.is_open()) {
//             for (const auto& pair : wordCount) {
//                 file << pair.first << ": " << pair.second << endl;
//             }
//             file.close();
//         } else {
//             cerr << "Unable to open file: " << outputfile << endl;
//     }
// };

// int main() {
//     Mapper mapper;
//     string filename = "../Class_14/text_1.txt";
//     string outputfile = "../Class_14/output.txt";   
//     // mapper.pair(filename);
//     mapper.output(filename,outputfile);

//     return 0;
// }
