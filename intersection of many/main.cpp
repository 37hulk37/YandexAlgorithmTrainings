#include <fstream>
#include <unordered_set>

int main() {
    std::fstream fin, fout;

    fin.open("input.txt", std::ios::in);
    fout.open("output.txt", std::ios::out);

    std::unordered_set<long long> s_u, s_d;

    if (fin) {
        int ch;
        fin >> ch;
        while (ch != '\n') {
            s_u.insert(ch);
        }
    }

    return 0;
}