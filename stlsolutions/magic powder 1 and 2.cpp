#include <bits/stdc++.h>
using namespace std;
long long arr[100001];
long long marr[100001];


long long maxen = 2000000000;

long long numOfcookies(long long arr1[],long long arr2[],long long k,int n,long long coies){
        int mn = n;
        long long mk = k;
    for(int i = 0 ; i < mn ; i++){
        long long divi = arr2[i]/arr1[i];
        if(divi < coies){
            long long dfe = arr2[i] - (divi*arr1[i]);
            long long deff = coies - divi;
            long long adi = (arr1[i]*deff) - dfe;
            if(adi > mk){
                return false;
            }

            mk = mk - adi;




        }


    }
    return true;

}

signed main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int n;
  long long v,k;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> v;
    arr[i] = v;
  }
  for (int i = 0; i < n; i++) {
    cin >> v;
    marr[i] = v;
  }
  long long lb = 0;
  long long rb = maxen;
  long long midp;

  while(rb > lb){
      midp = (lb+rb+1)/2;
     if(numOfcookies(arr,marr,k,n,midp)){

         lb = midp;
    }else{

         rb = midp-1;
     }


   }

 //  numOfcookies(arr,marr,k,n,midp)
   std::cout << lb  << '\n';




}
