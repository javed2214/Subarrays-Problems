// Maximum Sum Subarray Of Size K
// https://www.geeksforgeeks.org/find-maximum-minimum-sum-subarray-size-k/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {1,4,2,10,23,3,1,0,20};
	int n = sizeof(a) / sizeof(int);

	int k = 4;

	if(k > n){
		
		cout<<"Invalid!";
		return 0;
	}

	int sum = 0;

	for(int i=0;i<k;i++) sum += a[i];

	int res = sum;

	for(int i=k;i<n;i++){
		res += a[i] - a[i-k];
		sum = max(sum, res);
	}	

	cout << sum;

	return 0;
}