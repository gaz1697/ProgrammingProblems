#include <bits/stdc++.h>
using namespace std;
int arr[5000001];

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, v,l,r,count;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> v;
    arr[i] = v;
  }
  count = 0;
  sort(arr,arr+n);

  l = 0;
  r = (n/2);

  while ( r < n && l != n/2) {


    if(arr[r] >= arr[l]*2){

      arr[l] = 0;
      count++;
      r++;
      l++;
    }else {

        r++;


    }

  }

  count = n-count;

  std::cout << count << '\n';
}
