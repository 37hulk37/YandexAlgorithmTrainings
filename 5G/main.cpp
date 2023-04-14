#include <fstream>
#include <vector>
#include <map>
#include <algorithm>

//long long numScores(const std::map<int, int>&points, int n, int k) {
//    long actSz = 0, uniqueNum = 0;
//    //std::map<int, int> points;
//    long long res = 0;
//
//    int r = 0;
//    for (int l = 0; l < n; l++) {
//        while (r < n && points[l] * k >= points[r]) {
//            if (points[seq[r]] == 0) {
//                uniqueNum++;
//            }
//            points[seq[r]]++;
//
//            actSz++;
//            r++;
//        }
//
//        int rangeLen = r - l;
//        if (points[seq[l]] >= 2) {
//            res += (rangeLen - 1) * 3;
//        } else if (points[seq[l]] >= 3) {
//            res += 1;
//        }
//
//        //res += (rangeLen - 1) * (rangeLen - 2) * 3;
//
//        points[seq[l]]--;
//        actSz--;
//
//        if (points[seq[l]] == 0) {
//            uniqueNum--;
//        }
//    }
//
//    return res;
//}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    int n, k;
    fin >> n >> k;
    std::vector<int> seq(n);
    std::map<int, int> uniquePoints;
    for (int& p: seq) {
        fin >> p;
        uniquePoints[p]++;
    }

    //fout << numScores(uniquePoints, n, k) << "\n";

    return 0;
}
