#include <iostream>
#include <vector>
#include <algorithm>

struct table {
    int num;
    char type;

    table(int x, int y) : num(x), type(y) {}

    bool operator< (const table& other) const {
        return num < other.num;
    }
};

int main() {
    int n, m;
    std::cin >> n >> m;
    std::vector<table> tables;

    for (int i = 0; i < m; i++) {
        int x, y;
        std::cin >> x >> y;
        tables.push_back({x, 's'});
        tables.push_back({y+1, 'e'});
    }

    std::sort(tables.begin(), tables.end());

    int view = 0, watched = 0;
    for (int i = 0; i < m*2; i++) {
        if (view > 0) {
            watched += tables[i].num - tables[i-1].num;
        }
        if (tables[i].type == 's') {
            view++;
        }
        if (tables[i].type == 'e') {
            view--;
        }
    }

    std::cout << n - watched << std::endl;

    return 0;
}
