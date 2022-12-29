#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin >> n >> k;
    string s;
    cin >> s;
    int allowed[26];
    for(int i = 0; i < 26; i++){
        allowed[i]= -1;
    }
    long long total = 0;
    for(int i = 0; i < k; i++){
        char c;
        cin >> c;
        int pos = c - 'a';
        allowed[pos] = 1;
    }
    long long len = 0;
    for(int i = 0; i < n; i++){
        if(allowed[s[i]-'a'] == 1){
            len++;
           // cout << len << endl;
        }else {
            total +=  ((len*(len+1))/2);
         //   cout << "total" << total << endl;
            len = 0;
        }
    }
 
    total += ((len*(len+1))/2);
    cout << total << endl;
    return 0;
	
}

