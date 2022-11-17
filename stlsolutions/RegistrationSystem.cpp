#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  std::vector<char> letters;
  char t;
  while(std::cin >> t){

  sort(letters.begin(),letters.end());
  if(!binary_search(letters.begin(),letters.end(),t)){
    letters.push_back(t);
  }

}

if(letters.size() % 2 == 0){
  std::cout << "CHAT WITH HER!" ;
}else{
  std::cout << "IGNORE HIM!";

}


  return 0;
}
