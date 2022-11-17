#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;

  while (std::cin >> t) {
    if(t != 0){
    int i = 0;
    int a = 0;
    int b = 0;
    stack<pair<int, int> > histo;
    while(t--) {

      int n;
      std::cin >> n;
      if(!histo.empty()){
        if(n > histo.top().first){

          histo.push(make_pair(n,i));

        }
        else if(n < histo.top().first){
            int index = 0;
            while (!histo.empty() && n < histo.top().first) {
              index=histo.top().second;
              int m  = i-index;


              if(histo.top().first * m > a*b){
                a = histo.top().first;
                b = m;
              }

              histo.pop();


            }
            histo.push(make_pair(n,index));
        }
      }else{
        histo.push(make_pair(n,i));
      }

        i++;
      }
      while(!histo.empty()){
           int m  = i-histo.top().second;


              if(histo.top().first * m > a*b){
                a = histo.top().first;
                b = m;
              }
              histo.pop();
      }
      std::cout << a*b << '\n';

  }
      else{
          cout << flush;
      }
      cout << flush;
  }
  return 0;
}
