#include <iostream>
#include <cstring>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    string ex = "codeforces";
    int x = 0;
    int longo = 0;
    int length = 0;

    cin >> x;
    if (x >= 1 && x <= 1000) {
        do {
            int counter = 0;
            cin >> word;
            longo = word.length();
            if (longo == 10) {
                for (int i = 0; i <= 9; i++) {
                    if (ex[i] != word[i]) {
                        counter++;
                    }
                }
                cout << counter << endl;
            }
            x--;
        } while (x > 0);
    } else {
        return 0;
    }
    return 0;
}
