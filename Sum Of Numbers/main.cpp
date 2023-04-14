#include <fstream>
#include <vector>

int main() {
    long n, sum;
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);
    fin >> n >> sum;
    std::vector<long> seq(n);

    for (int i = 0; i < n; i++) {
        fin >> seq[i];
    }

    long l = 0, curSum = 0, count  = 0;

    for (int k = 0; k < n; k++) {
        curSum += seq[k];

        if (curSum == sum) {
            count++;
            curSum -= seq[l];
            l++;

        } else if (curSum > sum) {
            while (curSum > sum) {
                curSum -= seq[l];
                l++;
            }

            if (curSum == sum) {
                count++;
                curSum -= seq[l];
                l++;
            }
        }
    }

    fout << count;
    return 0;
}
