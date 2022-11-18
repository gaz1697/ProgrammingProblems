#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int l, r;
        int zero = 0;
        cin >> l >> r;
        if (l == 0)
        {
            l = 1;
            zero = 1;
        }
        int diff = r - l + 1;
        int res = diff + diff - 1;
        cout << res << endl;
    }
}
