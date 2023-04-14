#include <fstream>
#include <vector>

std::vector<int> input(int n, std::ifstream& fin) {
    std::vector<int> v(n);
    for (int& el: v) {
        fin >> el;
    }

    return v;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    int n, m;
    fin >> n;
    std::vector<int> v1 = input(n, fin);
    fin >> m;
    std::vector<int> v2 = input(m, fin);

    int l = 0, r = 0, left, right, diff = 1e9;
    for (int k = 0; k < n + m; k ++) {
        if (std::abs(v1[l] - v2[r]) < diff) {
            diff = std::min(diff, std::abs(v1[l] - v2[r]));
            left = l;
            right = r;
        }

        if (v1[l] > v2[r]) {
            r++;
        } else {
            l++;
        }
    }

    fout << v1[left] << " " << v2[right] << std::endl;

    return 0;
}
