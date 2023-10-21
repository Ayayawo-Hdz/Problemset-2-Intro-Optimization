#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int rep, h, m, hour, minute = 0, i = 0, input = 0;
    vector<int> time;

    cin >> rep;
    int minutes[rep];
    if (rep >= 1 && rep <= 1439) {
        while (i < rep) {
            int x = 0;
            minute = 0;
            time.clear();
            std::string timeInput;

            std::getline(std::cin >> std::ws, timeInput);
            std::istringstream iss(timeInput);

            while (x < 2 && (iss >> input)) {
                if (x == 0) {
                    if (input >= 0 && input < 24) {
                      hour = 23 - input;
                      if (hour != 0) {
                        minute = hour * 60;
                      }
                      time.push_back(input);
                    } else { return(0); }
                }
                if (x == 1) {
                    if (input >= 0 && input < 60) {
                      m = 60 - input;
                      minute += m;
                      time.push_back(input);
                    } else { return(0); }
                }
                x++;
                minutes[i] = minute;
            }
            i++;
        }
        for (int k = 0; k < i; k++) {
            cout << minutes[k] << endl;
        }
    }
    return 0;
}
