#include <bits/stdc++.h>
using namespace std;

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  while (n--) {
    string k = "";
    string kk = "";
    int m;
    cin >> m;
    string e;
    cin >> e;
    int t = e[0] - '0';
    t++;
    k += to_string(t);
    kk += to_string(1);
    for (int i = 1; i < m; i++) {
        t = e[i] - '0';
        t++;
        if(t == k[i-1] - '0'){
          t--;
           kk += to_string(0);
        }else{
             kk += to_string(1);
        }

        k += to_string(t);

    }

    std::cout << kk << '\n';

  }


}
