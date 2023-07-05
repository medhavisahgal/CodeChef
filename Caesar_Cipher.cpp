#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s, t, u;
        cin >> s >> t >> u;
        string new1;
        int shifts = t[0] - s[0];
        if (shifts < 0) {
            shifts = shifts + 26;
        }
        for (int i = 0; i < n; i++) {
            int new_val = u[i] + shifts;
            if (new_val > 'z') {
                new_val = new_val - 26;
            }
            new1.push_back(char(new_val));
        }
        cout << new1 << endl;
    }
    return 0;
}
