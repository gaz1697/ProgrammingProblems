#include <bits/stdc++.h>
using namespace std;
int arr[100001];

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  std::map<string, int> map;
  int t;
  cin >> t;
  while (t--) {
    map.clear();
    int n;
    cin >> n;
    int count = 0;
      while (n--) {
          string name;
          cin >> name;
          int id;
          cin >> id;
          if(map.find(name) == map.end()){
            map[name] = count;
            arr[count] = id;
            count++;
          }else{
              int kr = map[name];
              if(arr[kr] > id){
                  arr[kr] = id;
              }


          }

      }
    sort(arr,arr+count);
    for(int i = 0; i < count; i++){
        std::cout << arr[i] << " ";
    }
    cout << '\n';
  }





}
