#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int t; cin >> t; while(t--){

		int mat[4];
		int min  = 101;
		int mind = 0;
		for(int i = 0; i < 4; i++){
			int v;
			cin >> v;
			int ind = i;
			if(i == 2){
			    ind = 3;
			}
			if(i == 3){
			    ind = 2;
			}
			if(v < min){
				min = v;
				mind = ind;
			}
		
			mat[ind] = v;

		}
		
		if(mat[(mind+1)%4] > mat[mind] && mat[(mind+2)%4]> mat[(mind+1)%4] && mat[(mind+2)%4] > mat[(mind+3)%4]){
			cout << "YES" <<endl;
		}else {
			cout << "NO" << endl;
		}
	




	}
	return 0;
}

