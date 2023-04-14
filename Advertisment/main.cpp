#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

struct person {
    int time;
    int type;
    int idx;

    bool operator< (const person& other) const {
        if (time == other.time)
            return type < other.type;
        return time < other.time;
    }
};

enum type {
    start = 1,
    end = 0
};

int main() {
    int n;
    std::cin >> n;
    std::vector<person> P;

    for (int i = 0; i < n; i++) {
        int enter, exit;
        std::cin >> enter >> exit;
        if (exit - enter >= 5) {
            P.push_back({enter, start, i});
            P.push_back({exit-5, end, i});
        }
    }

    std::sort(P.begin(), P.end());

    if (P.empty()) {
        std::cout << 0 << " " << 10 << " " << 20;
    } else if (P.size() == 2) {
        std::cout << 1 << " " << P[0].time << " " << P[0].time + 10;
    } else {
        int bestAns = 0, firstBest = 0, secondBest = 0;
        std::set<int> firstAd;

        for (int i = 0; i < P.size(); i++) {
            person event1 = P[i];

            if (event1.type == start) {
                firstAd.insert(event1.idx);
            }

            if (firstAd.size() > bestAns) {
                bestAns = firstAd.size();
                firstBest = event1.time;
                secondBest = firstBest + 5;
            }

            int secondAdCnt = 0;
            for (int j = i+1; j < P.size(); j++) {
                person event2 = P[j];

                if (event2.type == start && firstAd.find(event2.idx) == firstAd.end()) {
                    secondAdCnt++;
                }
                if (event2.time - 5 >= event1.time  && firstAd.size() + secondAdCnt > bestAns) {
                    bestAns = firstAd.size() + secondAdCnt;
                    firstBest = event1.time;
                    secondBest = event2.time;
                }
                if (event2.type == end && firstAd.find(event2.idx) == firstAd.end()) {
                    secondAdCnt--;
                }
            }
            if (event1.type == end) {
                firstAd.erase(event1.idx);
            }
        }


        std::cout << bestAns << " " << firstBest << " " << secondBest;
    }

    return 0;
}
