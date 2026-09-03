// Given a string S consisting of * and #. The length of the string is variable. Find the minimum number of * or # that must be added to make it a valid string.

// A string is considered valid if the number of * and # in the string are equal.

// If * > #, output a positive integer.
// If # > *, output a negative integer.
// If # = *, output 0.
// Example

// Input:

// ###***

// Output:

// 0

// because the number of # and * is equal.

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    int cntstar=0;
    int cnthash=0;

    for(int i=0;i<s.length();i++){
        if(s[i] == '#'){
            cnthash++;
        }
        else{
            cntstar++;
        }
        
    }
    cout<<cntstar-cnthash;

    return 0;
}
