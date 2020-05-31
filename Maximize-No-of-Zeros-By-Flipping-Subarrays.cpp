// Maximize Number of Zeros by Flipping Subarrays
// Given a binary array, find the maximum number zeros in an array with one 
// flip of a subarray allowed. A flip operation switches all 0s to 1s and 1s to 0s.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a[] = {0, 0, 0, 1, 0, 1};
    int n = sizeof(a) / sizeof(int);

    int zeros = 0;

    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            zeros += 1;
            a[i] = -1;
        }
    }

    int mx = INT_MIN, sum = 0;

    for(int i = 0; i < n; i++){
        sum += a[i];
        mx = max(mx, sum);
        sum = max(sum, 0);
    }

    cout << mx + zeros << endl;

    return 0;
}