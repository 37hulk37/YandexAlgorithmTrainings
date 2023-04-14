#include <fstream>
#include <vector>

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    long n, dist;
    fin >> n >> dist;
    std::vector<long> coords(n);

    for (int i = 0; i < n; i++) {
        fin >> coords[i];
    }

    long last = 0, count = 0;
    for (int first = 0; first < n; first++) {
        while(last < n && coords[last] - coords[first] <= dist) {
            last++;
        }
        count += n - last;
    }

    fout << count << std::endl;

    return 0;
}
