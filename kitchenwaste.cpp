#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m, e, a = 0, b = 0, waste;
    cin >> n >> m;
    if (n <= m) {
        for (int i = 0; i < n; i++) {
            int e = 0;
            cin >> e;
            a += e;
            if (i != n - 1) {
                cin.ignore(1, ' ');
            }
        }
        for (int i = 0; i < m; i++) {
            int e = 0;
            cin >> e;
            b += e;
            if (i != m - 1) {
                cin.ignore(1, ' ');
            }
        }
        waste = b - a;
        cout << waste << endl;
    }

    return 0;
}
