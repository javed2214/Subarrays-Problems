// Program to Find if there is any Subarray Having Zero Sum
// https://www.geeksforgeeks.org/find-if-there-is-a-subarray-with-0-sum/

// TC : O(n)
// SC : O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	unordered_set <int> sumSet;
	int sum = 0;
	
	for(int i=0;i<n;i++){

		sum += a[i];

		if(sum == 0 or sumSet.find(sum) != sumSet.end()){
			cout<<"Yes";
			return 0;
		}

		sumSet.insert(sum);
	}
	
	cout<<"No";

	return 0;
}