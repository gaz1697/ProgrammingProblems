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
        long long l, r, x, oldTemp, newTemp;
        cin >> l >> r >> x >> oldTemp >> newTemp;
        long long res;
        if (oldTemp == newTemp)
        {
            res = 0;
        }
        else
        {
            long long diff = abs(oldTemp - newTemp);
            if (diff >= x)
            {
                res = 1;
            }
            else
            {
                res = -1;
                long long upperDiff = abs(oldTemp - r);
                long long lowerDiff = abs(oldTemp - l);
                long long upper = abs(r - newTemp);
                long long lower = abs(l - newTemp);
                if (upper >= x)
                {
                    if (upperDiff >= x)
                    {
                        res = 2;
                    }
                    else
                    {
                        if (lower >= x)
                        {
                            res = 3;
                        }
                    }
                }
                if (lower >= x)
                {
                    if (lowerDiff >= x)
                    {
                        res = 2;
                    }
                    else
                    {
                        if (upper >= x)
                        {
                            if (res != 2)
                            {
                                res = 3;
                            }
                        }
                    }
                }
            }
        }

        cout << res << '/n';
    }
}
