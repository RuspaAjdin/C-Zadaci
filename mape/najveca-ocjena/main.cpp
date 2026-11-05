#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {
    int n, ocjena;
    string s;
    map<string, vector<int> > m;
    map<int, int> m2;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (char &slovo : s) slovo = tolower(slovo);
        cin >> ocjena;
        while (ocjena < 1 || ocjena > 5) cin >> ocjena;
        m[s].push_back(ocjena);
        m2[ocjena]++;
    }

    cout << fixed << setprecision(2);
    double najbolji = 0;
    string imeNajboljeg;

    for (auto ucenik : m) {
        double sum = 0;
        for (int o : ucenik.second) sum += o;
        double prosjek = sum / ucenik.second.size();
        cout << ucenik.first << " " << ucenik.second.size() << " " << prosjek << endl;
        if (prosjek > najbolji) {
            najbolji = prosjek;
            imeNajboljeg = ucenik.first;
        }
    }

    cout << "Najbolji: " << imeNajboljeg << " " << najbolji << endl;

    for (int i = 1; i <= 5; i++) cout << i << ": " << m2[i] << endl;
}
