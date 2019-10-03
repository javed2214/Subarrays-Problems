// Program to Count Number of Subarrays Havig Sum Exactly Equal to K
// https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/
// https://leetcode.com/problems/subarray-sum-equals-k/

// TC : O(n)
// SC : O(n)

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	int k;
	cin>>k;

	unordered_map <int,int> Map;
	int curr_sum = 0, cnt = 0;

	for(int i=0;i<n;i++){

		curr_sum += a[i];

		if(curr_sum == k) cnt++;

		if(Map.find(curr_sum - k) != Map.end())
			cnt += Map[curr_sum - k];

		Map[curr_sum]++;
	}

	cout<<cnt;

	return 0;
}