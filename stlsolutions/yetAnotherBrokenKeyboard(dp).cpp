#include <bits/stdc++.h>
using namespace std;
 
// Declare global variable to store the total number of allowed substrings
long long total = 0;

// Declare global variable to store the current index of the string
int indx = 0;

// Declare a global variable to store the input string
string s1 = "";

// Declare an array to store whether each letter is allowed or not
int allowed[26];

// Declare a recursive function to find the number of allowed substrings ending at the current index
long long subStr(){

    // If the current index is negative, return 0
    if (indx < 0){
        return 0;
    }

    // If the current letter is not allowed, move to the next index and call the function again
    if(allowed[s1[indx]-'a'] == -1){
        indx--;
        subStr();//f(n-1)
        return 0;
    }
   
    // Move to the next index and call the function
    indx--;
    long long accum = subStr()+1;

    // Add the number of allowed substrings ending at the current index to the total
    total += accum;

    // Return the number of allowed substrings ending at the current index
    return accum;
 }

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin >> n >> k;
    cin >> s1;
    indx = n-1;
    for(int i = 0; i < 26; i++){
        allowed[i]= -1;
    }
    for(int i = 0 ; i < k; i++){
        char c;
        cin >> c;
        allowed[ c - 'a' ] = 1;
    }
    subStr();
    cout << total << endl;
    return 0;
	
}
// This code reads in two integers n and k, followed by a string s1 and k characters. It initializes an array allowed to store whether each letter is allowed or not, with the default value being -1. It then sets the value of allowed to 1 for each of the k characters that are input.
// The code then calls the recursive function subStr, which starts at the last index of the string and moves towards the beginning. It checks if the current letter is allowed or not. If it is not allowed, it moves to the next index and calls subStr again. If it is allowed, it adds 1
// to the number of allowed substrings ending at the current index and moves to the next index, calling subStr again. The total number of allowed substrings is updated by adding the number of allowed substrings ending at the current index to the global variable total. The function returns 
// the number of allowed substrings ending at the current index.
// Finally, the code outputs the total number of allowed substrings.
