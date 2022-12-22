#include <bits/stdc++.h>
using namespace std;

// map to store the already computed values
map<long long,long long> m;

// memos function to find the maximum value of the given expression
long long memos(long long n){
    // base case
    if(n <= 3){
        return n;
    }
     // check if the value has already been computed
    if(m.find(n)!= m.end()){
        return m[n];
    }
    // if the value has not been computed, compute it and store it in the map
    m[n]=max(n,memos(n/2)+memos(n/3)+memos(n/4));
    return m[n];
}

int main() {
	

	long long n;
	while(cin >> n){// take input until EOF
	cout << memos(n)<< '\n';// print the result
	}
	
    return 0;
}
