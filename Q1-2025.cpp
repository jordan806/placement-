/* You are given an array of colours/characters. Count how many times each colour appears.

If a colour appears an odd number of times, it is an odd colour.
If there are multiple odd colours, print the one that appears first in the original array.
If every colour appears an even number of times, print All are even.

Example
N=7 [r g b b g y y]
ouput r */

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<char,int> freq;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    char ans='\0';
    for(int x=0;x<n;x++){
        if(freq[arr[x]]% 2 == 1){
            ans=arr[x];
            cout<<ans;
            break;
        }
    }

    if(ans == '\0'){
        cout<<"all are even";
    }

return 0;
    
}
