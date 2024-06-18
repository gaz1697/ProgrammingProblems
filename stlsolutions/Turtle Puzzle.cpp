#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main(int argc, char const *argv[]) {


vector<int> pos;

int t ;
cin >> t;
while (t--) {
  int total = 0;
  int n ;
  cin >> n;
  while(n--){
    int v;
    cin >> v;
    total += abs(v);
  }
  cout << total << '\n';


}




    return 0;
}
