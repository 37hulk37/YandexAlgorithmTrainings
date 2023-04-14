#include <fstream>
#include <string>
#include <unordered_set>

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    std::unordered_set<std::string> s;

    if (fin) {
        while (!fin.eof()) {
            std::string word;
            fin >> word;
            if (s.find(word) == s.end()) {
                s.insert(word);
            }
        }
    }

    fout << s.size();

    return 0;
}
