#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {


std::vector<int> pos;

int t ;
std::cin >> t;
int cou = 0;
int str = 0;
while (t--) {
  int m ;
  std::cin >> m;



  if(m == 1){
    pos.push_back(cou);
    cou = 0;
    str++;
  }
   cou++;


}
pos.push_back(cou);
std::cout << str << '\n';
for (size_t i = 1; i < pos.size(); i++) {
  std::cout << pos[i] << ' ';
}



    return 0;
}
