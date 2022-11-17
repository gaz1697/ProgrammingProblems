#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
std::vector<int> pos;
std::vector<int> neg;
std::vector<int> zero;

int t ;
std::cin >> t;
while (t--) {
  int n;
  std::cin >> n ;
  if(n < 0){
    neg.push_back(n);
  }else if( n > 0){
    pos.push_back(n);
  }else {
    zero.push_back(n);
  }
}
if(pos.size() == 0){
  pos.push_back(neg.back());
  neg.pop_back();
  pos.push_back(neg.back());
  neg.pop_back();

}
if(neg.size() % 2 == 0){
  zero.push_back(neg.back());
  neg.pop_back();
}
std::cout << neg.size() << ' ';
for (size_t i = 0; i < neg.size(); i++) {
  std::cout << neg[i] << ' ';
}
cout << '\n';
std::cout << pos.size() << ' ';
for (size_t i = 0; i < pos.size(); i++) {
  std::cout << pos[i] << ' ';
}
cout << '\n';
std::cout << zero.size() << ' ';
for (size_t i = 0; i < zero.size(); i++) {
  std::cout << zero[i] << ' ';
}


    return 0;
}
