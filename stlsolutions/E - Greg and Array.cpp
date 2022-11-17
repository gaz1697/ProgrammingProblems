#include <bits/stdc++.h>
using namespace std;
long long arr[100001];
long long varr[100001];
long long marr[100001];
int larr[100001];
int rarr[100001];
int qarr[100001];

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n,m,li,ri,q,v;
  cin >> n >> m >> q;
  for (int i = 0 ; i < n; i++) {
    cin >> v;
    arr[i] = v;
  }

  for (int i = 0; i < m; i++) {
    cin >> li >> ri >> v;
    larr[i] = li-1;
    rarr[i] = ri-1;
    varr[i] = v;
  }

  while (q--) {
    cin >> li >> ri;
    li--;ri--;
    qarr[li] += 1;
    qarr[ri+1] += -1;
  }
  long long sum = 0;
  for(int i = 0; i < m; i++){
    sum += qarr[i];
    qarr[i] = sum;
  }

  for(int i = 0; i < m; i++){
    long long d = varr[i]*qarr[i];
    marr[larr[i]] += d;
    marr[rarr[i]+1] += -d;
  }

  sum = 0;
  for(int i = 0; i < n; i++){
    sum += marr[i];
    arr[i] += sum;
    std::cout << arr[i] << ' ';
  }




}
