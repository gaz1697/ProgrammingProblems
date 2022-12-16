#include <bits/stdc++.h> 
using namespace std; 


signed main(int argc, char const *argv[]) {
  // disable synchronization with C standard streams
  ios_base::sync_with_stdio(false);
  // untie cin and cout
  cin.tie(NULL);

  string s;
  
  cin >> s;
  // store length of string
  int n = s.length();

  // iterate through each character in the string
  for(int i = 0 ; i < n ; i++){
      // if it is the first character, convert it to uppercase
      if(i == 0){
          s[i] = toupper(s[i]);
      }
      // if it is a space, convert the following character to uppercase
      else if(s[i] == ' '){
          s[i+1] = toupper(s[i+1]);
      }
  }
  // output the modified string to standard output
  cout << s << '\n';
}
