#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {

  char c;

  stack <char> myStack;
  while (std::cin >> c) {
   if(myStack.empty()){
     myStack.push(c);
   }
   else{
    if(c == '+')
    {
      if(myStack.top() == '+')
        {
        myStack.pop();
        }
      else{
      myStack.push(c);

        }
    }
      else {

          if(myStack.top() == '-')
            {
            myStack.pop();
            }
          else
            {
            myStack.push(c);

            }
          }
   }

  }



  if(myStack.empty()){
    std::cout << "Yes" << '\n';
  }else{
    std::cout << "No" << '\n';
  }
  return 0;
}
