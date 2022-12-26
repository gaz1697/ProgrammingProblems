#include <bits/stdc++.h>
using namespace std;

bool check(string a, string b){
    bool iden = true;
    for(int i = 0; i < a.length(); i++){
        if(a[i]!=b[i]){
            iden = false;
            break;
        }
    }
    return iden;
}

bool checkun(string lng, string shrt){
    bool iden = true;
    int shrtinc = 0;
    for(int i = 0; i < lng.length(); i++){
        if(lng[i] == shrt[shrtinc]){
            shrtinc++;
        }
    }
  //  std::cout << "shrtinc " << shrtinc << std::endl;
    if(shrtinc != shrt.length()){
        iden = false;
    }
    return iden;
}


int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    string s1,s2;
	    bool isSub = false;
	    cin >> s1 >> s2;
	    if(s1.length() > s2.length()){
	       isSub = checkun(s1,s2);
	    }else if(s2.length()>s1.length()){
	      isSub = checkun(s2,s1);
	    }else {
	       isSub = check(s1,s2);
	    }
	    
	    if(isSub){
	        std::cout << "YES" << std::endl;
	    }else {
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
