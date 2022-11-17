#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  stack<int>buildings;

  int i = 0;


  while(std::cin >> t){
    stack<int>buildings;
    int size = 0;
    i++;

  while(t--){
    int n;
    cin >> n;
    if(buildings.empty() || n > buildings.top()){
        buildings.push(n);
    }else{

        while(!buildings.empty() && n <= buildings.top()){
            if( n < buildings.top() ){


                size++;

            }
            buildings.pop();


        }

      buildings.push(n);
    }

  }

  while(!buildings.empty()){

      if(buildings.top()!= 0 ){

      size++;


      }
      buildings.pop();

  }


  std::cout << "Case "<< i<< ": "<<size << '\n';

  }

  return 0;
}
