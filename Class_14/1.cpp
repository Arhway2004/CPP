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
//         ifstream w(filename);
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

//     void output(const string& filename, const string& outputfile) {
//         map<string, int> wordCount;
//         process(filename, wordCount);
        
//         ofstream file(outputfile);
//         if (file.is_open()) {
//             for (const auto& pair : wordCount) {
//                 file << pair.first << " " << pair.second << endl;
//             }
//             file.close();
//         } else {
//             cerr << "Unable to open file: " << outputfile << endl;
//         }
//     }
// };

// int main() {
//     Mapper mapper;
//     string outputfile;
//     string filename;
//     // string filename = "../Class_14/text_1.txt";
//     // string outputfile = "../Class_14/output.txt";   
//     cout << "Enter the output file name: ";
//     cin >> filename;

//     mapper.output(filename +".txt", filename + "_mr.txt");

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <map>
// using namespace std;

// class Mapper{
// public:
//     void input(const string& input, map<string,int>& wordcount){
//         ifstream file(input);
//         if(!file.is_open()){
//             cout << "cannot open the file" <<endl;
//         }
//         string line;
//         while(getline(input, line)){
//             track(line,wordcount);
//         }
//         file.close();
//     }
//     void output(const string& file, string output){
//         map<string,int> wordcount;
//         input(file, wordCount);
//         ofstream file(output);
//         if(file.is_open()){
//             for(const auto& element : wordcount){
//                 file << element.first << " " <<element.second << "\n";
//             }
//             file.close();
//         }
//     }
//     void track(const string& line, map<string,int>& wordcount){
//         std::stringstream ss(line);
//         string word;
//         while(ss>>word){
//             wordcount[word]++;
//         }
//     }
// };

// int main(){
//     Mapper map;
//     string fileName;
//     cout << "Enter input file name: "; // Prompt user for input file name
//     cin >> fileName;
//     map.output(fileName + ".txt", fileName + "_mr.txt");
//     return 0;
// }
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Mapper{
public:
    void input(const string& filename, map<string,int>& wordcount){
        ifstream file(filename);
        if(!file.is_open()){
            cout << "Cannot open the file" << endl;
            return;
        }
        string line;
        while(getline(file, line)){
            track(line, wordcount);
        }
        file.close();
    }

    void output(const string& input_file, const string& output_file){
        map<string,int> wordcount;
        input(input_file, wordcount);
        ofstream file(output_file);
        if(file.is_open()){
            for(const auto& element : wordcount){
                file << element.first << " " << element.second << "\n";
            }
            file.close();
        }
    }

    void track(const string& line, map<string,int>& wordcount){
        std::stringstream ss(line);
        string word;
        while(ss >> word){
            wordcount[word]++;
        }
    }
};

int main(){
    Mapper map;
    string fileName;
    cout << "Enter input file name: ";
    cin >> fileName;
    map.output(fileName + ".txt", fileName + "_mr.txt");
    return 0;
}
