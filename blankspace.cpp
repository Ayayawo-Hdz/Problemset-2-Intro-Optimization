#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep = 0, i = 0, len = 0, x = 0, input, counter = 0, maxceros = 0;
    vector<int> binary;
    vector<int> maxnum;
    vector<int> res;

    cin >> rep;
    if (rep >= 1 && rep <= 1000) {
        while (i < rep) {
            counter = 0;
            len = 0;
            x = 0;
            binary.clear();
            maxnum.clear();
            cin >> len;
            if (len >= 1 && len <= 100) {
                std::string binaryInput;

                std::getline(std::cin >> std::ws, binaryInput);
                std::istringstream iss(binaryInput);

                while (x < len && (iss >> input)) {
                    if (input == 0 || input == 1) {
                        binary.push_back(input);
                        x++;
                    } else {
                        return 0;
                    }
                }
                for (int k = 0; k < binary.size(); k++) {
                    if (binary[k] == 0) {
                        counter++;
                    }
                    maxnum.push_back(counter);
                    if (binary[k] == 1){
                        counter = 0;
                    }
                }
                auto maxelem = *max_element(maxnum.begin(), maxnum.end());
                res.push_back(maxelem);
                i++;
            } else { return 0; }
        }
        for (int k = 0; k < res.size(); k++) {
            cout << res[k] << endl;
        }
    }
    return 0;
}

