#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long getNumberOfGoodPairs(int n, vector<int>& numbers) {
    unordered_map<long long, long long> dict;

    long long max = 0, maxN = 0;

    for (int i = 0; i < n; i++) {
        if (dict.find(numbers[i] % 200) == dict.end()) {
            dict.insert({numbers[i] % 200, 1});
        } else {
            dict[numbers[i] % 200] ++;
            max ++;

            if (max > maxN) {
                maxN = max;
            }
        }
    }

    vector<long long> dp(maxN+1);

    dp[0] = dp[1] = 1;
    for (int i = 2; i < maxN+1; i++) {
        dp[i] = dp[i-1]*i;
    }

    long long sum = 0;

    for (auto it = dict.begin(); it != dict.end(); it++) {
        if (it->second >= 2){
            long long C = dp[it->second] / (dp[it->second - 2] * dp[2]);
            it->second = C;
        } else {
            it->second = 0;
        }
    }

    for (auto it = dict.begin(); it != dict.end(); it++) {
        if (it->second > 0) {
            sum += it->second;
        }
    }

    return sum;
}

int readInt() {
    int x;
    cin >> x;
    return x;
}

vector<int> readList(int n) {
    vector<int> res(n);
    for (int i = 0; i < n; i++) {
        cin >> res[i];
    }
    return res;
}

int main() {
    int n = readInt();
    vector<int> numbers = readList(n);
    cout << getNumberOfGoodPairs(n, numbers);

    return 0;
}