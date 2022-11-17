#include <bits/stdc++.h>
using namespace std;


signed main(int argc, char const *argv[]) {


  long long lb = 0;
  long long rb = 1000000000;
  while (rb > lb) {
     long long midp = (lb+rb+1)/2;
     cout << midp << '\n';
     cout.flush();
     char ch;
     cin >> ch;
     if(ch == '='){
       std::cout << "! "<< midp  << '\n';
       cout.flush();
       break;
     }else if (ch == '<'){
         if(midp == 1){
             std::cout <<0<< '\n';
             cout.flush();
             cin >> ch;
             std::cout << "! "<< 0  << '\n';
             cout.flush();
             break;
         }
       rb = midp-1;
     }else if(ch == '>'){
         if(midp == 999999999){
             std::cout <<1000000000<< '\n';
             cout.flush();
             cin >> ch;
             std::cout << "! "<< 1000000000  << '\n';
             cout.flush();
             break;
         }
       lb = midp;

     }

  }




}
