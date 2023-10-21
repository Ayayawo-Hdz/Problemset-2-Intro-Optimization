#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;

    cin >> ans;
    string  x[ans];
    int i = 0;

    while (ans > 0) {
        cin >> x[i];
        transform(x[i].begin(), x[i].end(), x[i].begin(), ::tolower);
        if (x[i] == "yes") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        ans--;
        i++;
    }

    return 0;
}
