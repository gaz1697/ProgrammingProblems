#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int dp[n+1][8];
    for(int i = 0; i<n+1; i++){
        for(int k = 0; k < 8; k++){
            dp[i][k]=1000000;
        }
    }
    int cost;
    string letters;
    dp[0][0] = 0;
    for(int i = 1; i < n+1;i++){
        cin >> cost;
        cin >> letters;
        int bitMaVal = 0;
        for(int k = 0 ; k < 3; k++){
            char l = 'A' + k;
            for(char c : letters){
                if(c == l)
                {
                    bitMaVal += (1 << (2 - k));
                }
            }
        }
   
        
           for(int d = 0 ; d < 8; d++){
           dp[i][d]= min(dp[i-1][d],dp[i][d]);
           dp[i][bitMaVal | d] = min(dp[i][bitMaVal | d],(dp[i][d]+cost));
       }
           
    }
    
    int res = dp[n][7];
  
    if(res < 1000000){
       cout << res << endl;
    }else {
       cout << -1 << endl;
    }
    
	return 0;
}