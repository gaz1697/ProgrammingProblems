#include<iostream>
using namespace std;


int main(int argc, char const *argv[]) {

  int t;
  string s;
  cin >> t;
  while (t--) {
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
      if(s[i] == 'D'){
        break;
      }
      count++;
    }
    std::cout << count << '\n';
  }
return 0;

}
