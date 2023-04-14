#include <fstream>
#include <vector>
#include <tuple>
#include <unordered_set>

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    std::vector<long> Arr;

    if (fin) {
        while (!fin.eof()) {
            long tmp;
            fin >> tmp;
            Arr.push_back(tmp);
        }
    }

    std::unordered_set<long> S;

    for (int i = 1; i < Arr[0]*2+1; i += 2) {
        if (S.find(Arr[i]) == S.end()) {
            S.insert(Arr[i]);
        }
    }

    fout << S.size() << std::endl;

    return 0;
}
