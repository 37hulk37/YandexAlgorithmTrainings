#include <iostream>
#include <vector>
#include <list>

using namespace std;


vector<long long> sumElem(int n, const vector<long long> &cards);
long getCardCount(int n, int k, const vector<long long> &cards);
int readInt();
vector<long long> readList(int n);


long getCardCount(int n, int k, const vector<long long> &cards) {
    long long sum = 0;

    for (int i = 0; i < k; i++) {
        sum += cards[i];
    }

    long long maxSum = sum;

    n--;
    k--;

    while (k >= 0) {
        sum = sum - cards[k] + cards[n];

        if (sum > maxSum)
            maxSum = sum;

        k--;
        n--;
    }

     return maxSum;
}

int readInt() {
    int x;
    cin >> x;
    return x;
}

vector<long long> readList(int n) {
    vector<long long> res(n);
    for (int i = 0; i < n; i++) {
        cin >> res[i];
    }
    return res;
}

int main() {
    int n = readInt();
    int k = readInt();

    vector<long long> cards = readList(n);

    cout << getCardCount(n, k, cards);
}