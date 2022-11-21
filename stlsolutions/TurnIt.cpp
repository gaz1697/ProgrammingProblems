#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int u, v, a, s;
        bool sucsess = false;
        cin >> u >> v >> a >> s;

        if (u <= v)
        {
            sucsess = true;
        }
        else
        {
            u = (u * u) + 2 * (-a) * s;
            if (u <= v)
            {
                sucsess = true;
            }
        }

        if (sucsess)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
