#include <iostream>
#include <cstdlib>
#include <math.h>
#include <set>
using namespace std;
int main(int argc, char const *argv[]) {


int t ;
cin >> t;


while (t--) {
  int a , b , l = 0;
  set<int> countK;
  cin >> a >> b >> l;
 if(a == b) {

    for(int x = 0; x < l ; x++){
        double aPow = pow(a,x);
        if(aPow > l ){ break; }else {
            double res = l / aPow;
            if(int(res) == res) {
                countK.insert(res);
            }
        }

    }


 }else {

    for(int x = 0; x < l ; x++){

    double aPow = pow(a,x);
    if(aPow > l ){ break; }

    for(int y = 0; y < l; y++){
        double bPow = pow(b,y);
        if(bPow > l){ break; }
        double powerRes = aPow * bPow;
        if(powerRes <= l){
            double res = l / powerRes;
            if(int(res) == res) {
                countK.insert(res);
            }
        }
        

    }
        

  }

 }
  

    cout << countK.size() << '\n'; 

  
}




    return 0;
}
