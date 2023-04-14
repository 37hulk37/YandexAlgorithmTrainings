#include <fstream>
#include <string>
#include <unordered_map>

#include <iostream>

std::unordered_map<std::string, long> makeDict(const std::string& word) {
    std::unordered_map<std::string, long> dict;

    for (auto it: word) {
        std::string ch(1, it);
        if (dict.find(ch) == dict.end()) {
            dict.insert({ch, 1});
        } else {
            dict[ch] += 1;
        }
    }

    return dict;
}

long matchDicts(std::unordered_map<std::string, long>& dict1, std::unordered_map<std::string, long>& dict2) {
    long matches = 0;
    for (auto it = dict1.begin(); it != dict1.end(); it++) {
        if (dict1.find(it->first) != dict1.end() && dict1[it->first] == dict2[(it->first)]) {
            matches++;
        }
    }

    return matches;
}

long modifyDict(std::unordered_map<std::string, long>& sDict, std::unordered_map<std::string, long>& wDict, char tmpCh, long countModifier) {
    long ans = 0;

    std::string ch(1, tmpCh);
    if (sDict.find(ch) == sDict.end()) {
        sDict[ch] = 0;
    }
    if (wDict.find(ch) != wDict.end() && sDict[ch] == wDict[ch]) {
        ans = -1;
    }
    sDict[ch] += countModifier;
    if (wDict.find(ch) != wDict.end() && sDict[ch] == wDict[ch]) {
        ans = 1;
    }

    return ans;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    long lenW, lenS;
    fin >> lenW >> lenS;

    std::string word, str, tmp_w;
    fin >> word >> str;

    for (int i = 0; i < lenW; i++) {
        tmp_w += str[i];
    }

    std::unordered_map<std::string, long> wDict = makeDict(word), sDict = makeDict(tmp_w);

    long matchLetters = matchDicts(wDict, sDict);
    long occurrences = 0;

    if (matchLetters == wDict.size()) {
        occurrences++;
    }
    for (int  i = lenW; i < lenS; i++) {
        matchLetters += modifyDict(sDict, wDict, str[i - lenW], -1);
        matchLetters += modifyDict(sDict, wDict, str[i], +1);
        if (matchLetters == wDict.size()) {
            occurrences++;
        }
    }

    fout << occurrences;

    return 0;
}
