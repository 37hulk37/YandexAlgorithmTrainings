#include <fstream>
#include <vector>

std::vector<long long> prefixSumVertexes(const std::vector< std::pair<long long, long long> >& vertexes, bool reverse) {
    std::vector<long long> prefixSum(vertexes.size());

    if ( !reverse ) {
        for (int i = 1; i < vertexes.size(); i++) {
            if (vertexes[i].second > vertexes[i-1].second) {
                prefixSum[i] = prefixSum[i-1] + vertexes[i].second - vertexes[i-1].second;
            } else {
                prefixSum[i] = prefixSum[i-1];
            }
        }
    } else {
        for (int i = vertexes.size(); i>= 0; i--) {
            if (vertexes[i].second > vertexes[i+1].second) {
                prefixSum[i] = prefixSum[i+1] + vertexes[i].second - vertexes[i+1].second;
            } else {
                prefixSum[i] = prefixSum[i+1];
            }
        }
    }

    return prefixSum;
}

int main() {
    long long n, m;
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);
    fin >> n;
    std::vector< std::pair<long long, long long> > vertexes(n);

    for (int i = 0; i < n; i++) {
        fin >> vertexes[i].first >> vertexes[i].second;
    }

    std::vector<long long> prefixSum = prefixSumVertexes(vertexes, false);
    std::vector<long long> prefixSumReverse = prefixSumVertexes(vertexes, true);

    fin >> m;
    for (int i = 0; i < m; i++) {
        long long start, end;
        fin >> start >> end;
        start--;
        end--;
        if (start < end) {
            fout << prefixSum[end] - prefixSum[start] << std::endl;
        } else {
            fout << prefixSumReverse[end] - prefixSumReverse[start] << std::endl;
        }
    }

    return 0;
}
