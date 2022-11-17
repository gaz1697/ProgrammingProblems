#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
int t, b;
cin >> t >> b;
queue<int> myQ;
queue<int> myQ1;
int i = 0;
while(t--){
    i++;
  int s;
  std::cin >> s ;
  myQ.push(s);
  myQ1.push(i);

}

if(myQ1.size() == 1 ){
    cout << 1 << '\n';
}else{
while(!myQ.empty()){

  int k = myQ.front();
  int s = myQ1.front();

  myQ.pop();
  myQ1.pop();
  k = k - b;
  if(k > 0){
    myQ.push(k);
    myQ1.push(s);
  }

  if(myQ1.size() == 1){


    std::cout << myQ1.front() << '\n';
    break;

  }


}

}


    return 0;
}
