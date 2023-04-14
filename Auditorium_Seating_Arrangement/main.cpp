#include <iostream>
#include <vector>
#include <algorithm>

struct student {
    int pos;
    int idx;

    bool operator< (const student& other) {
        return pos < other.pos;
    }
};

int maxNumVar(const std::vector<student>& students, int n, int d) {
    int maxVar = 0, curVar = 0;

    for (int l = 0, r = 0; r < n; r++) {
        curVar++;
        while (students[r].pos - students[l].pos > d) {
            curVar--;
            l++;
        }
        maxVar = std::max(maxVar, curVar);
    }

    return maxVar;
}

std::vector<int> ans(const std::vector<student>& students, int n, int maxVar) {
    int nowVar = 1;
    std::vector<int> ans(n);
    for (auto& [pos, idx] : students) {
        ans[idx] = nowVar;
        nowVar++;
        if (nowVar > maxVar) {
            nowVar = 1;
        }
    }

    return ans;
}

int main() {
    int n, d;
    std::cin >> n >> d;
    std::vector<student> students(n);
    for (int  i = 0; i < n; i++) {
        std::cin >> students[i].pos;
        students[i].idx = i;
    }

    std::sort(students.begin(), students.end());

    int maxVar = maxNumVar(students, n, d);

    std::cout << maxVar << std::endl;

    std::vector<int> arr = ans(students, n, maxVar);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
