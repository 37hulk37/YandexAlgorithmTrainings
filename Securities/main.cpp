#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

struct security {
    int time;
    int type;

    bool operator< (const security& other) const {
        if (time == other.time)
            return type < other.type;
        return time < other.time;
    }
};

enum type {
    start = -1,
    end = 1
};

bool ans(const std::vector<security>& S) {
    int sec = 0;
    std::set<int> St, End;

    for (int i = 0; i < S.size(); i++) {
        if (i == 0 && S[i].time > 0 || i == S.size()-1 && S[i].time < 10000) {
            return false;
        }

        if (S[i].type == end) {
            sec--;
            if (End.find(S[i].time) == End.end())
                End.insert(S[i].time);
            else
                return false;
        } else {
            if (St.find(S[i].time) == St.end())
                St.insert(S[i].time);
            else
                return false;
            sec++;
        }
        if (sec > 2 || sec == 0 && i < S.size()-1) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        std::vector<security> S;
        for (int j = 0; j < m; j++) {
            int enter, exit;
            std::cin >> enter >> exit;
            S.push_back({enter, start});
            S.push_back({exit, end});
        }

        std::sort(S.begin(), S.end());
        std::cout << (ans(S) ? "Accepted" : "Wrong Answer") << std::endl;
    }

    return 0;
}
