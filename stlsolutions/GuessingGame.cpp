#include <iostream>

using namespace std;

int main() {
  // Read in the number of test cases
  int t;
  cin >> t;

  // Loop over the test cases
  while (t--) {
    long long n, m;
    cin >> n >> m;
    
    // Calculate the total number of squares in the grid
    long long sampleS = n * m;

    // Check if the grid is 1x1
    if (n == 1 && m == 1) {
      // If it is, the probability is 0/1
      cout << "0/1" << endl;
    }
    // Check if either dimension is even
    else if (n % 2 == 0 || m % 2 == 0) {
      // If either dimension is even, the probability is 1/2
      cout << "1/2" << endl;
    } else {
      // Otherwise, calculate the number of "odd" squares
      // and print the probability as oddO / sampleS
      long long oddO = sampleS / 2;
      cout << oddO << "/" << sampleS << endl;
    }
  }

  // End the program
  return 0;
}
