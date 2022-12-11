#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Read in the number of test cases
  int t;
  cin >> t;

  // Loop over the test cases
  while (t--) {
    int x, y, k;
    cin >> x >> y >> k;

    // Calculate the distance between x and y
    int dist = abs(x - y);

    // Initialize the number of steps to 0
    int steps = 0;

    // Check if the distance is not 0
    if (dist != 0) {
      // If it is not, calculate the number of steps required
      // to reach y from x, rounding up to the nearest integer
      steps = ceil((dist * 1.00) / k);
    }

    // Print the number of steps
    cout << steps << endl;
  }

  // End the program
  return 0;
}
