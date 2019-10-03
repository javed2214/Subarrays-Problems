// Program to Find Sum of All Subarrays of an Array Efficiently
// https://www.geeksforgeeks.org/sum-of-all-subarrays/

// TC : O(n)
// SC : O(1)

#include<bits/stdc++.h>
using namespace std;

int subarraySum(int *a, int n){

	long res = 0;

	for(int i=0;i<n;i++)
		res += (a[i] * (i + 1) * (n - i));

	return res;
}

int main(){

	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	cout << subarraySum(a,n);
	
	return 0;
}