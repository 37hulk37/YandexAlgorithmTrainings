#include <fstream>
#include <string>
#include <set>

std::multiset<std::string> makeGenome(std::string& str) {
    std::multiset<std::string> genomes;

    std::string genome;
    for (int i = 0; i < str.length(); ) {
        genome += str[i];

        if (genome.length() == 2) {
            genomes.insert(genome);
            genome = "";
        } else {
            i++;
        }
    }

    return genomes;
}

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    std::string strUp, strDown;
    fin >> strUp >> strDown;
    std::multiset<std::string> genomesUp = makeGenome(strUp);
    std::multiset<std::string> genomesDown = makeGenome(strDown);

    long count = 0;
    for (auto gen: genomesUp) {
        if (genomesDown.find(gen) != genomesDown.end()) {
            count++;
        }
    }

    fout << count;
    
    return 0;
}
