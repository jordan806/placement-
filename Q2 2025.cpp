// Problem Statement
// Given an array of n integers, count how many elements are greater than every element that appears before them.

// The first element is always counted because there are no previous elements to compare with.

// input =3

// 589 456 678
// Output:

// 2

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n ;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int maxi=v[0];
    int cnt=1;

    for(int i=1;i<n;i++){
        if(v[i] >maxi){
            cnt++;
            maxi=v[i];
        }

    }
    cout<<cnt;
    

    return 0;
}
