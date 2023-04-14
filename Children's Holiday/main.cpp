#include <iostream>
#include <vector>
#include <algorithm>

struct person {
    int time;
    int idx;

    bool operator< (const person& other) const {
        return time < other.time;
    }
};

void makeVector(std::vector<person>& P, int t, int num, int pause, int m, int n, int idx) {
    int curTime = 0, edgeTime = t*num, curB = 0;
    while (curB < m) {
        if (curTime < edgeTime) {
            P.push_back({curTime + t, idx});
            curTime += t;
            curB++;
        } else {
            curTime += pause;
            edgeTime = curTime + t*num;
        }
    }
}

int main() {
    int m, n;
    std::cin >> m >> n;

    std::vector<person> P;

    for (int i = 0; i < n; i++) {
        int t, num, br;
        std::cin >> t >> num >> br;
        makeVector(P, t, num, br, m, n, i);
    }

    std::sort(P.begin(), P.end());

    std::vector<int> Num(n);

    int sum = 0, time = 0, i = 0;
    while(sum < m) {
        auto pers = P[i];
        time = pers.time;
        sum++;
        Num[pers.idx]++;
        i++;
    }

    std::cout << time << std::endl;

    for (int num : Num) {
        std::cout << num << " ";
    }

    return 0;
}
