#include <fstream>
#include <vector>

// идея: с помощью бинпоиска отсортировать массив таким образом, чтобы получить на позициях 0, 1, n-1, n-2, максимальные
// по модулю числа
void nthRerrange(std::vector<long>& seq, long left, long right, long n) {
    while (left < right) {
        long middle = seq[(left + right)/2];
        long leftBound = left, rightBound = left;

        for (int i = left; i < right; i++) {
            long cur = seq[i];

            if (cur == middle) {
                seq[i] = seq[rightBound];
                seq[rightBound] = cur;
                rightBound++;
            } else if (cur < middle) {
                seq[i] = seq[rightBound];

                seq[rightBound] = seq[leftBound];
                seq[leftBound] = cur;

                leftBound++;
                rightBound++;
            }
        }

        if (n < leftBound) {
            right = leftBound - 1;
        } else if (n >= rightBound) {
            left = rightBound;
        } else {
            return ;
        }
    }
}

int main() {
    std::ifstream  fin("input.txt", std::ios::in);
    std::ofstream  fout("output.txt", std::ios::out);

    std::vector<long> seq;

    while ( !fin.eof() ) {
        long x;
        fin >> x;
        seq.push_back(x);
    }

    // 
    nthRerrange(seq, 0, seq.size(), seq.size()-1);
    nthRerrange(seq, 0, seq.size()-1, seq.size()-2);
    nthRerrange(seq, 0, seq.size()-3, 2);

    if (seq[seq.size()-1]*seq[seq.size()-2]*seq[seq.size()-3] >= seq[seq.size()-1]*seq[seq.size()-2]*seq[seq.size()-3]) {
        fout << seq[seq.size()-1] << " " << seq[seq.size()-2] << " " << seq[seq.size()-3];
    } else {
        fout << seq[seq.size()-1] << " " << seq[seq.size()-2] << " " << seq[seq.size()-3];
    }

    return 0;
}
