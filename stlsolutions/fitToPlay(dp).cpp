#include <bits/stdc++.h>
using namespace std;

int maxDiff(vector<int> arr1,int mx,int index){
    if(index == 0){
        return mx - arr1[index];
    }
    if(arr1[index] > mx) mx = arr1[index]; 
    index--;
    return max(maxDiff(arr1,mx,index), mx - arr1[index]);
}

signed main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
        int n,v;
        cin >> n;
        vector<int> arr;
        for(int i = 0; i < n; i++){
           cin >> v;
           arr.push_back(v);
        }
       int res = maxDiff(arr,arr[n-1],n-1);
       if(res >= 0){
        cout << res << endl;
       }else{
        cout << "UNFIT" << endl;
       }
	    
	}
	
}
