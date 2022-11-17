#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  map<char,char>keysL = {{'q','w'},{'w','e'},{'e','r'},{'r','t'},{'t','y'},{'y','u'},{'u','i'},{'i','o'},{'o','p'},{'p','a'},{'a','s'},{'s','d'},{'d','f'},{'f','g'},{'g','h'},{'h','j'},{'j','k'},{'k','l'},{'l',';'},{';','z'},{'z','x'},{'x','c'},{'c','v'},{'v','b'},{'b','n'},{'n','m'},{'m',','},{',','.'},{'.','/'},{'/','/'}};
  map<char,char>keysR = {{'w','q'},{'e','w'},{'r','e'},{'t','r'},{'y','t'},{'u','y'},{'i','u'},{'o','i'},{'p','o'},{'a','p'},{'s','a'},{'d','s'},{'f','d'},{'g','f'},{'h','g'},{'j','h'},{'k','j'},{'l','k'},{';','l'},{'z',';'},{'x','z'},{'c','x'},{'v','c'},{'b','v'},{'n','b'},{'m','n'},{',','m'},{'.',','},{'/','.'},{'/','/'}};
  char s;
  std::cin >> s;
  string k;
  std::cin >> k;
  string sen = "";
  if(s=='L'){
  for (size_t i = 0; i < k.length(); i++) {
    char f = k[i];
    cout << keysL[f];
  }}else if(s=='R'){

  for (size_t i = 0; i < k.length(); i++) {
    char f = k[i];
    cout << keysR[f];
  }
  }
  return 0;
}
