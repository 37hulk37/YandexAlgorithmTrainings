#include <iostream>
#include <vector>
#include <algorithm>

struct Friend {
    int money;
    int friendly;

    bool operator< (const Friend& other) const {
        return money < other.money;
    }
};

int main() {
    int n, d;
    std::cin >> n >> d;
    std::vector<Friend> allFriends(n);

    for (Friend& guy: allFriends) {
        std::cin >> guy.money >> guy.friendly;
    }

    std::sort(allFriends.begin(), allFriends.end());

    long long friendly = 0, curFriendly = 0;
    for (int l = 0, r = 0; l < n; l++) {
        while (r < n && allFriends[l].money + d > allFriends[r].money) {
            curFriendly += allFriends[r].friendly;
            r++;
        }
        friendly = std::max(friendly, curFriendly);

        curFriendly -= allFriends[l].friendly;
    }

    std::cout << friendly << std::endl;

    return 0;
}
