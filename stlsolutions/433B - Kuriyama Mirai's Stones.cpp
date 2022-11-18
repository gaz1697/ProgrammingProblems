#include <bits/stdc++.h>
using namespace std;
long long arr[100001];
long long sarr[100001];
signed main(int argc, char const *argv[])
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, li, ri, type;
  long long v;
  cin >> n >> v;
  arr[0] = v;
  sarr[0] = v;
  for (int i = 1; i < n; i++)
  {
    cin >> v;
    arr[i] = v + arr[i - 1];
    sarr[i] = v;
  }
  sort(sarr, sarr + n);
  for (int i = 1; i < n; i++)
  {

    sarr[i] = sarr[i] + sarr[i - 1];
  }
  cin >> m;
  while (m--)
  {
    cin >> type >> li >> ri;
    li--;
    ri--;

    if (li == 0)
    {
      if (type == 1)
      {
        cout << arr[ri] << '\n';
      }
      else
      {
        cout << sarr[ri] << '\n';
      }
    }
    else
    {
      if (type == 1)
      {
        cout << arr[ri] - arr[li - 1] << '\n';
      }
      else
      {

        cout << sarr[ri] - sarr[li - 1] << '\n';
      }
    }
  }
}
