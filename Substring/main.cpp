#include <iostream>
#include <map>
#include <set>
#include <string>

std::pair<int, int> seq(const std::string& str, int n, int maxfreq, int symb) {
    int left, lenseq = 0, freq = 0, cursymb = 0;
    std::map<char, int> M;

    for (int l = 0, r = 0; r < n; r++) {
        if (M[str[r]] == 0) {
            cursymb++;
        }
        M[str[r]]++;
        freq = std::max(freq, M[str[r]]);

        while (l < n && freq > maxfreq) {
            if (freq == M[str[l]]) {
                freq--;
            }
            M[str[l]]--;
            if (M[str[l]] == 0) {
                cursymb--;
            }
            l++;
        }

        if (cursymb == symb && freq <= maxfreq && lenseq < r - l+1) {
            lenseq = r - l+1;
            left = l;
        }
    }

    return {lenseq, left+1};
}

int main() {
    int n, maxfreq;
    std::cin >> n >> maxfreq;
    std::string str;
    std::cin >> str;

    int symb = 0;
    std::set<char> S;
    for (char ch: str) {
        if (S.find(ch) == S.end()) {
            S.insert(ch);
            symb++;
        }
    }

    std::pair<int, int> p = seq(str, n, maxfreq, symb);

    std::cout << p.first << " " << p.second << std::endl;

    return 0;
}