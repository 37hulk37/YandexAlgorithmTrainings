#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

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

std::vector<std::string> split(std::string& str) {
    std::vector<std::string> result;
    std::string word;
    long count = 0;

    for (auto ch: str) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_') {
            word += ch;
            count++;
        } else {
            if (word.length() > 0) {
                result.push_back(word);
                word = "";
            }
        }
    }

    if (count == str.length()) {
        result.push_back(str);
    }

    if ( !result.empty() ) {
        if (word.length() > 0 && word != result[result.size()-1]) {
            result.push_back(word);
        }
    }

    return result;
}

long checkIdentifier(const std::string& word, bool bCaseSensitivity, bool bStartFromDigit) {
    long count = 0, countCh = 0;

    if ( !bStartFromDigit && (word[0] >= '0' && word[0] <= '9'))
        return false;

    for (auto ch: word) {
        if (ch == '_' || (ch >= 'a' && ch <= 'z') || (bCaseSensitivity && ch >= 'A' && ch <= 'Z')) {
            count++;
            countCh++;
        }
        if (ch >= '0' && ch <= '9') {
            count++;
        }
    }

    return count == word.size() && countCh > 0;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    if (fin) {
        long n;
        std::string caseSensitivity, startFromDigit;

        fin >> n >> caseSensitivity >> startFromDigit;

        bool bCaseSensitivity = caseSensitivity == "yes", bStartFromDigit = startFromDigit == "yes";

        std::unordered_set<std::string> keyWords;

        for (int i = 0; i < n; i++) {
            std::string keyWord;
            fin >> keyWord;

            if ( !bCaseSensitivity ) {
                keyWord = toLower(keyWord);
            }

            keyWords.insert(keyWord);
        }

        std::unordered_map<std::string, long> identifiers, posId;
        long countPos = 0;

        while (!fin.eof()) {
            std::string str;
            fin >> str;

            if ( !bCaseSensitivity ) {
                str = toLower(str);
            }

            std::vector<std::string> words = split(str);

            for (auto& word: words) {
                if (checkIdentifier(word, bCaseSensitivity, bStartFromDigit)) {
                    if (keyWords.find(word) == keyWords.end()) {
                        if (identifiers.find(word) == identifiers.end()) {
                            identifiers.insert({word, 1});
                            posId.insert({word, countPos});
                            countPos++;
                        } else {
                            identifiers[word]++;
                        }
                    }
                }
            }
        }

        long count = 0;
        std::string elem = identifiers.cbegin()->first;

        for (const auto& it: identifiers) {
            if (it.second > count || (it.second == count && posId[it.first] < posId[elem])) {
                count = it.second;
                elem = it.first;
            }
        }

        fout << elem << std::endl;
    }

    return 0;
}
