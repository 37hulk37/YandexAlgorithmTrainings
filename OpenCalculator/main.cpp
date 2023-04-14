#include <fstream>
#include <set>

void check(long arg, const std::set<long>& setBut, const std::set<long>& setNum, long& count) {
    if (setBut.find(arg) == setBut.end() && setNum.find(arg) == setNum.cend()) {
        count++;
    }
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    long x, y, z, N, count = 0;
    fin >> x >> y >> z >> N;

    std::set<long> setBut, setNum;
    setBut.insert(x);
    setBut.insert(y);
    setBut.insert(z);

    while (N / 10 > 0 || (N < 10 && N > 0)) {
        check(N%10, setBut, setNum,count);
        setNum.insert(N%10);
        N /= 10;
    }

    fout << count;

    return 0;
}
