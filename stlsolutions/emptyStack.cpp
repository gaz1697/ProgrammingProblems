#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

  int t;
  string s;
  cin >> t;
  getline(cin,s);
  for (size_t i = 0; i < t; i++) {
    getline(cin,s);
    stack <char> myStack;
    for(char c : s) {

      if(c == ')'){
        if(myStack.empty()){
          myStack.push(c);
          break;
        }
        if (myStack.top() == '(' ) {
          myStack.pop();
        }
      }else if(c == ']'){
        if(myStack.empty()){
          myStack.push(c);
          break;
        }
        if (myStack.top() == '[' ) {
          myStack.pop();
        }
      }else{
        myStack.push(c);
      }


    }
    // std::cout << s;
    if(myStack.empty()){
      std::cout << "Yes" << '\n';
    }else {

      std::cout << "No" << '\n';
    }

  }

  return 0;
}
