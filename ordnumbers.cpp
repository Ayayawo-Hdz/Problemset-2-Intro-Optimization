#include <iostream>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep, counter;
    long long n, temp;

    cin >> rep;
    while (rep--) {
        counter = 0;
        cin >> n;
        for (int i = 1; i <= 9; i++) {
            temp = 0;
            for (int j = 1; j <= 10; j++) {
                temp = temp * 10 + i;
                if (temp <= n) {counter++;}
            }
        }
        cout << counter << endl;
    }
    return 0;
}
