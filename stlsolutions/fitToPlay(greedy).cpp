#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--){
	    
	    // Initialize variables
	    long long maximum = 0;  // maximum difference between two numbers
	    int n;  // number of integers
	    cin >> n;
	    long long curr;  // curr is the current number
	    
	    // Read in the first number
	    cin >> curr;
	    int minimum = curr;  // initialize minimum to the first number
	    
	    // Loop through the remaining n-1 numbers
	    for(int i = 1; i < n; i++){
	        cin >> curr;  // read in the current number
	        
	        // Calculate the difference between the current number and the minimum
	        long long res = curr - minimum;
	        
	        // Update the minimum if necessary
	        if(curr < minimum){
	            minimum = curr;
	        }
	        
	        // Update the maximum if necessary
	        if(res > maximum){
	            maximum = res;
	        }
	        
	    }
	    
	    // Output the maximum difference, or "UNFIT" if the maximum is 0
	    if(maximum){
	        cout << maximum << endl;
	    }else {
	        cout << "UNFIT" << endl;
	    }
	}
	return 0;
}

