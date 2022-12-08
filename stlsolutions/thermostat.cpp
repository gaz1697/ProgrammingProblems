#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Read in the number of test cases
    int t;
    cin >> t;

    // For each test case
    while (t--)
    {
        // Read in the values of l, r, x, oldTemp, and newTemp
        long long l, r, x, oldTemp, newTemp;
        cin >> l >> r >> x >> oldTemp >> newTemp;

        // Set the result to -1 by default
        long long res = -1;

        // If the old and new temperatures are the same, the result is 0
        if (oldTemp == newTemp)
        {
            res = 0;
        }
        // Otherwise, calculate the difference between the old and new temperatures
        else
        {
            long long diff = abs(oldTemp - newTemp);

            // If the difference is greater than or equal to x, the result is 1
            if (diff >= x)
            {
                res = 1;
            }
            // Otherwise, the result is -1 by default
            else
            {
                // Calculate the differences between the old temperature and the upper and lower bounds,
                // and the differences between the new temperature and the upper and lower bounds
                long long upperDiff = abs(oldTemp - r);
                long long lowerDiff = abs(oldTemp - l);
                long long upper = abs(r - newTemp);
                long long lower = abs(l - newTemp);

                // If difference between the new temperature and the upper bound is greater than or equal to x
                if (upper >= x)
                {
                    // If the difference between the old temperature and upper bounds is greater than or equal to x,
                    // then the result is 2
                    if (upperDiff >= x)
                    {
                        res = 2;
                    }
                    // Otherwise, if the difference between the old temperature and lower bounds is greater than or equal to x,
                    // then the result is 3
                    else if (lowerDiff >= x)
                    {
                        res = 3;
                    }
                }

                // If the difference between the new temperature and lower bound is greater than or equal to x
                if (lower >= x)
                {
                    // If the difference between the old temperature and lower bounds is greater than or equal to x,
                    // then the result is 2
                    if (lowerDiff >= x)
                    {
                        res = 2;
                    }
                    // Otherwise, if the difference between the old temperature and upper bounds is greater than or equal to x
                    else if (upperDiff >= x)
                    {
                        // If the result is not already 2, then set it to 3
                        if (res != 2)
                        {
                            res = 3;
                        }
                    }
                }
            }
        }

        // Print the result
        cout << res << '\n';
    }
}