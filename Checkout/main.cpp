#include <iostream>
#include <algorithm>
#include <vector>

struct checkout {
    int time;
    int type;

    bool operator< (const checkout& other) {
        if (time == other.time) {
            return type < other.type;
        }
        return time < other.time;
    }
};

enum timeType {
    opened = 1,
    closed = -1
};


int main() {
    int n;
    std::cin >> n;
    std::vector<checkout> times;
    for (int i = 0; i < n; i++) {
        int hOpen, mOpen, hClose, mClose;
        std::cin >> hOpen >> mOpen >> hClose >> mClose;

        if (hOpen*60 + mOpen >= hClose*60 + mClose) {
            times.push_back({ hOpen*60 + mOpen, opened});
            times.push_back({ 24*60, closed});
            times.push_back({ 0, opened});
            times.push_back({ hClose*60 + mClose, closed});
        } else {
            times.push_back({ hOpen*60 + mOpen, opened});
            times.push_back({hClose * 60 + mClose, closed});
        }
    }

    std::sort(times.begin(), times.end());

    int numOpened = 0, time = 0;
    for (int i = 0; i < times.size(); i++) {
        if (numOpened == n) {
            time += times[i].time - times[i-1].time;
        }
        if (times[i].type == opened) {
            numOpened++;
        } else if (times[i].type == closed) {
            numOpened--;
        }
    }

    std::cout << time << std::endl;

    return 0;
}
