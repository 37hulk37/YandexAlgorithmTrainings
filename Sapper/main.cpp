#include <fstream>
#include <vector>

std::vector< std::vector<long> > makeField(long n, long m, const std::vector< std::pair<long, long> >& mines) {
    std::vector<long> dx = {1, 1, 1, 0, 0, -1, -1, -1};
    std::vector<long> dy = {-1, 0, 1, -1, 1, -1, 0, 1};

    std::vector< std::vector<long> > field(n+2, std::vector<long>(m+2));

    for (auto mineCoord: mines) {
        for (int k = 0; k < 8; k++) {
            field[mineCoord.first + dx[k]][mineCoord.second + dy[k]]++;
        }
    }

    for (auto curMine: mines) {
        field[curMine.first][curMine.second] = -1;
    }

    return field;
}

std::vector<std::string> makeStrings(long n, long m, const std::vector< std::vector<long> >& field) {
    std::vector<std::string> strings;
    for (int i = 1; i < n+1; i++) {
        std::string str;
        for (int j = 1; j < m + 1; j++) {
            if (field[i][j] != -1)
                str += std::to_string(field[i][j]) + " ";
            else
                str += "* ";
        }
        strings.push_back(str);
    }
    return strings;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    long n, m, k;
    fin >> n >> m >> k;

    std::vector< std::pair<long, long> > mines(k);

    for (int i = 0; i < k; ++i) {
        long x, y;
        fin >> x >> y;

        mines[i].first = x;
        mines[i].second = y;
    }

    std::vector< std::vector<long> > field = makeField(n, m, mines);
    std::vector<std::string> strings = makeStrings(n, m, field);

    for (auto& str: strings) {
        fout << str << std::endl;
    }

    return 0;
}
