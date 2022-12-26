// this dp soultion while correct doesn't work because of complexity 

#include <bits/stdc++.h>
using namespace std;

const int maximum = 10000;
int check(string s1, string s2,int m, int n, int dp [][maximum]){
    if(m == -1 || n == -1){
        return 0;
    }
    if(dp[m][n] != -1){
        return dp[m][n];
    }
    if(s1[m]==s2[n]){
        dp[m][n] = 1+check(s1,s2,m-1,n-1,dp);
        return dp[m][n];
    }
    
     dp[m][n] = max(check(s1,s2,m-1,n,dp),check(s1,s2,m,n-1,dp));
     return dp[m][n];
}


int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s1,s2;
	    int isSub = 0;
	    cin >> s1 >> s2;
	    int m = s1.length(); int n = s2.length();
        int dp [m][maximum] ; memset(dp, -1, sizeof(dp));
	   
	    isSub = check(s1,s2,m-1,n-1,dp);
	    if(isSub == s1.length()|| isSub==s2.length()){
	        std::cout << "YES" << std::endl;
	    }else {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
