#include <fstream>
#include <vector>
#include <unordered_map>

std::pair<int, int> seq(const std::vector<int>& trees, int n, int numColours) {
    int r = 0, colours = 0, lenSeq = 1e9, left, right;
    std::unordered_map<int, int> curColours;

    for (int l = 0; l < n; l++) {
        while (r < n && colours < numColours) {
            if (curColours[trees[r]] == 0) {
                colours++;
            }
            curColours[trees[r]]++;
            r++;
        }

        if (colours == numColours && lenSeq > r - l) {
            lenSeq = r - l;
            left = l;
            right = r-1;
        }
        curColours[trees[l]]--;

        if (curColours[trees[l]] == 0) {
            colours--;
        }
    }

    return  {left, right};
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    int n, numColours;
    fin >> n >> numColours;
    std::vector<int> trees(n);

    for (int i = 0; i < n; i++) { fin >> trees[i]; }

    std::pair<int, int> ans = seq(trees, n, numColours);

    fout << ans.first+1 << " " << ans.second+1;

    return 0;
}
