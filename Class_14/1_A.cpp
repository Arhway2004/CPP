#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Mapper {
public:
    Mapper() {}

    void track(const string& line, vector<pair<string, int>>& wordCount) {
        istringstream iss(line);
        string word;
        while (iss >> word) {
            auto it = find_if(wordCount.begin(), wordCount.end(), [&word](const pair<string, int>& p) {
                return p.first == word;
            });
            if (it != wordCount.end()) {
                it->second++;
            } else {
                wordCount.emplace_back(word, 1);
            }
        }
    }

    void process(const string& filename, vector<pair<string, int>>& wordCount) {
        ifstream file(filename);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                track(line, wordCount);
            }
            file.close();
        } else {
            cerr << "Unable to open file: " << filename << endl;
        }
    }

    void pair(const string& filename) {
        vector<pair<string, int>> wordCount;
        process(filename, wordCount);

        // Output word count pairs
        for (const auto& pair : wordCount) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }

    void output(const string& filename, const string& outputfile) {
        vector<pair<string, int>> wordCount;
        process(filename, wordCount);
        
        ofstream file(outputfile);
        if (file.is_open()) {
            for (const auto& pair : wordCount) {
                file << pair.first << ": " << pair.second << endl;
            }
            file.close();
        } else {
            cerr << "Unable to open file: " << outputfile << endl;
        }
    }
};

int main() {
    Mapper mapper;
    string filename = "../Class_14/text_1.txt";
    string outputfile = "../Class_14/output.txt";   
    mapper.output(filename, outputfile);

    return 0;
}


