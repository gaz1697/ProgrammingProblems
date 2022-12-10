#include <iostream>
using namespace std;

int main() {
  // Read the number of test cases
  int t;
  cin >> t;

  // Loop over each test case
  while (t--) {
    // Read the skill levels of Alice and Bob and their daily increases
    int a, b, p, q;
    cin >> a >> b >> p >> q;

    // Calculate the number of days it will take Alice and Bob to reach their desired skill levels
    double ali = p / (a * 1.0);
    double bob = q / (b * 1.0);
    int iali = ali;
    int ibob = bob;

    // Check if the difference between the number of days it will take Alice and Bob to reach their desired skill levels is less than or equal to 1,
    // and if Alice and Bob's desired skill levels are greater than or equal to their current skill levels
    // and if the number of days it will take Alice and Bob to reach their desired skill levels are both integers
    if (abs(ali - bob) <= 1 && p >= a && q >= b && iali == ali && ibob == bob) {
      // Print "YES" if it is possible for Alice and Bob to reach their desired skill levels
      cout << "YES" << endl;
    } else {
      // Print "NO" if it is not possible for Alice and Bob to reach their desired skill levels
      cout << "NO" << endl;
    }
  }

  // End the program
  return 0;
}
