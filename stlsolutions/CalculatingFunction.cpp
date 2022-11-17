#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main (int argc, char const *argv[])
{
  ios_base::sync_with_stdio (false);
  cin.tie (NULL);
  int t;
  cin >> t;
  int ans;
  if(t%2 == 0){
    ans = t/2;
  }else {
    ans = (t/2)-t;
  }
  std::cout << ans << '\n';



}
