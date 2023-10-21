/* El primer número entero de la raíz cuadrada de cualquier número mas el número entero de la 
 raíz cúbica de éste mismo número, menos la parte entera de la raíz cuadrada de la raíz cúbica del mismo número, da el resultado.
 wtf? */
#include <iostream>
#include <math.h>

using namespace std;
#define endl '\n';

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << (int)sqrt(n) + (int)cbrt(n) - (int)sqrt(cbrt(n)) << endl;
    }
    return 0;
}
