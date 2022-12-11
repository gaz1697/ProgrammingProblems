#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // disable synchronization with C I/O streams
    cin.tie(NULL); // untie cin from cout

    int t;
    cin >> t; // read the number of test cases

    while (t--) { // for each test case
        string f, s;
        cin >> f >> s; // read the two strings

        int f1, s1; // counters for number of ones in each string
        int len = f.size(); // length of the strings
        f1 = s1 = 0; // initialize counters

        // count the number of ones in each string
        for (int i = 0; i < len; i++) {
            if (f[i] == '1') {
                f1++;
            }
            if (s[i] == '1') {
                s1++;
            }
        }

        // create a new string with the same number of ones as the original strings
        string sol = "";
        int f0, s0; // counters for number of zeros in each string
        f0 = len - f1; // calculate the number of zeros in f
        s0 = len - s1; // calculate the number of zeros in s

        // add ones to the new string until one of the strings runs out of ones
        while (f1 > 0 && s0 > 0) {
            sol += '1';
            f1--;
            s0--;
            len--;
        }
        while (s1 > 0 && f0 > 0) {
            sol += '1';
            f0--;
            s1--;
            len--;
        }

        // add zeros to the new string until it has the same length as the original strings
        for (int i = 0; i < len; i++) {
            sol += '0';
        }

        cout << sol << '\n';
    }

    return 0;
}
