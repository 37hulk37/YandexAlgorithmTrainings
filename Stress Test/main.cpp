#include <fstream>
#include <unordered_map>
#include <unordered_set>
#include <string>

bool numStresses(std::string& str) {
    long stresses = 0;
    for (auto w: str) {
        if (w >= 'A' && w <= 'Z') {
            stresses++;
        }
    }

    return stresses != 1;
}

std::string toLower(const std::string& str) {
    std::string sLower;

    for (auto ch: str) {
        if (ch >= 'A' && ch <= 'Z')
            sLower += ch - ('A' - 'a');
        else
            sLower += ch;
    }

    return sLower;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    long n;
    fin >> n;

    std::unordered_map<std::string, std::unordered_set<std::string> > M;

    for (int i = 0; i < n; i++) {
        std::string word, wLower;
        fin >> word;
        wLower = toLower(word);

        if (M.find(wLower) == M.end()) {
            M.insert({wLower, {}});
        }

        M[toLower(word)].insert(word);
    }

    long mistakes = 0;

    while (!fin.eof()) {
        std::string word, wordLower;
        fin >> word;

        wordLower = toLower(word);

        if (M.find(wordLower) != M.end()) {
            if (M[wordLower].find(word) == M[wordLower].end()) {
                mistakes++;
            }
        } else {
            if (numStresses(word)) {
                mistakes++;
            }
        }
    }

    fout << mistakes;

    return 0;
}
