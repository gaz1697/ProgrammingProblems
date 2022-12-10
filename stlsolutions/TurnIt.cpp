#include <bits/stdc++.h>
using namespace std;

int main()
{
  // Read the number of test cases
  int T;
  cin >> T;

  // Loop over each test case
  while (T--)
  {
    // Read the initial velocity, maximum velocity, acceleration, and displacement
    int u, maxV, a, s;
    cin >> u >> maxV >> a >> s;

    // Calculate the final velocity using the formula v^2 = u^2 - 2as
    int vel = u*u-2*a*s;

    // Check whether the final velocity is less than or equal to the maximum velocity
    if (vel <= maxV*maxV)
    {
      // Print "Yes" if the final velocity is less than or equal to the maximum velocity
      cout << "Yes" << endl;
    }
    else
    {
      // Print "No" if the final velocity is greater than the maximum velocity
      cout << "No" << endl;
    }
  }

  // End the program
  return 0;
}
