#include <fstream>
#include <unordered_map>
#include <string>

int main() {
    std::ifstream fin("input.txt", std::ios::in);
    std::ofstream fout("output.txt", std::ios::out);

    std::unordered_map<std::string, long long> M;

    if (fin) {
        while (!fin.eof()) {
           std::string oper;
           fin >> oper;

           if (oper == "DEPOSIT") {
               std::string name;
               fin >> name;

               long long m;
               fin >> m;

               if (M.find(name) == M.end()) {

                   M.insert({name, m});
               } else {
                   M[name] += m;
               }
           } else if (oper == "INCOME") {
               long long p;
               fin >> p;
               for (auto it : M) {
                   if (it.second >= 0)
                    it.second = it.second + it.second * p / 100;
               }
           } else if (oper == "BALANCE") {
               std::string name;
               fin >> name;
               if (M.find(name) != M.end())
                   fout << M[name] << std::endl;
               else
                   fout << "ERROR" << std::endl;

           } else if (oper == "TRANSFER") {
               std::string name_from, name_to;
               fin >> name_from >> name_to;

               long long m;
               fin >> m;

               M[name_from] -= m;
               M[name_to] += m;
           } else if (oper == "WITHDRAW") {
               std::string name;
               fin >> name;
               long long m;
               fin >> m;

               M[name] -= m;
           }
        }
    }

    return 0;
}
