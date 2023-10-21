#include <iostream>
#include <vector>
#include <sstream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep, i = 0, counter = 0, n, m;
    int bend[100];
    int lend[100];
    cin >> rep;

    while (i < rep) {
        counter = 0;
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            cin >> bend[i];
            cin.ignore(1, ' ');
        }
        for (int i = 0; i < m; i++){
            cin >> lend[i];
            if (i != m -1) {
                cin.ignore(1, ' ');
            }
        }
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < m; k++) {
                if (bend[i] == lend[k]) {
                    counter++;
                }
            }
        }
        cout << counter << endl;
        i++;
    }
    return 0;
}
