// Maximum of All Subarrays of Size K - Sliding Window
// https://www.geeksforgeeks.org/sliding-window-maximum-set-2/?ref=rp

#include<bits/stdc++.h>
using namespace std;

void slidingWindow(int *a, int n, int k){

    if(k == 1){
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
        return;
    }

    int p = 0, q = k - 1;
    int mx = a[k - 1], t = p;

    while(q < n){

        mx = max(mx, a[p]);

        p += 1;

        if(p == q and p != n){
            cout << mx << " ";
            q += 1;
            p = ++t;
            if(q < n) mx = a[q];
        }
    }
}

int main(){

    int a[] = {4,1,3,5,6,8,1,3,6,3};
    int n = sizeof(a) / sizeof(int);

    int k; cin >> k;

    slidingWindow(a, n, k);

    return 0;
}