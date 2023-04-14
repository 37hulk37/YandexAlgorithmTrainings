#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>

struct conditioners {
    int power;
    int cost;

    bool operator< (const conditioners &that) const {
        return cost < that.cost;
    }
};

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    int n;
    fin >> n;
    std::vector<int> power(n);
    //int* power = new int[n];
    for (int i = 0; i < n; i++) {
        fin >> power[i];
    }

    int m;
    fin >> m;
    std::vector<conditioners> cond(m);
    //auto * cond = new std::pair<int, int>[m];
    for (conditioners &c: cond) {
        fin >> c.cost >> c.power;
    }

   std::sort(cond.begin(), cond.end());

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

        }
    }

    return 0;
}
