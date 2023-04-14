#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct route {
    int time;
    int city;
    int type;

    bool operator<(const route& other) const {
        if (time == other.time) {
            return type > other.type;
        }
        return time < other.time;
    }
};

enum type {
    depart = -1,
    arrive = 1,
    none = 0
};

int toTime(const std::string& str) {
    return ((str[0]-'0')*10 + str[1]-'0')*60 + (str[3]-'0')*10+str[4]-'0';
}

int main() {
    int n, m;

    std::cin >> n >> m;
    std::vector<route> R;
    std::vector<int> Cities(n+1), check(n+1);

    for (int i = 0; i < m; i++) {
        int from, to;
        std::string departureStr, arrivalStr;
        std::cin >> from >> departureStr >> to >> arrivalStr;

        int departure = toTime(departureStr), arrival = toTime(arrivalStr);

        check[from]--;
        check[to]++;

        if (departure >= arrival) {
            R.push_back({departure, from, depart});
            R.push_back({24*60, none, arrive});
            R.push_back({0, none, depart});
            R.push_back({arrival, to, arrive});
        } else {
            R.push_back({departure, from, depart});
            R.push_back({arrival, to, arrive});
        }
    }

    for (int i = 0; i <= n; i++)
    {
        if (check[i] != 0)
        {
            std::cout << -1;
            return 0;
        }
    }

    std::sort(R.begin(), R.end());
    int busCnt = 0;

    for (route r : R) {
        if (r.type == depart) {
            if (Cities[r.city] <= 0) {
                busCnt++;
                Cities[r.city]++;
            }
            Cities[r.city]--;
        } else if (r.type == arrive) {
            Cities[r.city]++;
        }
    }

    std::cout << busCnt;

    return 0;
}
