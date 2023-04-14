#include <fstream>
#include <vector>
#include <string>

std::pair<double, double> freqRange(const std::vector< std::pair<double, std::string> >& seq, const double cLeftBound, const double cRightBound) {
    double leftBound = cLeftBound, rightBound = cRightBound;
    double eps = 1e-6;

    for (int i = 1; i < seq.size(); i++) {
        double tmp = (seq[i].first + seq[i-1].first) / 2;

        if (std::abs(seq[i].first - seq[i-1].first) < eps)
            continue;

        if (seq[i] > seq[i-1]) {
            if (seq[i].second == "closer") {
                leftBound = std::max(leftBound, tmp);
            } else {
                rightBound = std::min(rightBound, tmp);
            }
        } else {
            if (seq[i].second == "closer") {
                rightBound = std::min(rightBound, tmp);
            } else {
                leftBound = std::max(leftBound, tmp);
            }
        }
    }

    std::pair<double, double> ans;
    ans.first = leftBound;
    ans.second = rightBound;

    return ans;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    long n;
    fin >> n;

    std::vector< std::pair<double, std::string> > seq(n);
    for (int i = 0; i < n; i++) {
        if (i > 0)
            fin >> seq[i].first >> seq[i].second;
        else
            fin >> seq[i].first;
    }

    double leftBound = 30.0, rightBound = 4000.0;
    std::pair<double, double> ans = freqRange(seq, leftBound, rightBound);

    fout << ans.first << " " << ans.second;

    return 0;
}
