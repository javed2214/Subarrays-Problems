// Program to Count Number of Subarrays Having Sum Equals to K
// https://leetcode.com/problems/subarray-sum-equals-k/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {1,2,3,4,5,6,7,8,9,5,4,1,10};
	int n = sizeof(a) / sizeof(int);

	int sum = 0, cnt = 0, k = 10;
	unordered_map <int, int> Map;

	for(int i=0;i<n;i++){

		sum += a[i];
		if(sum == k) cnt++;
		if(Map.find(sum - k) != Map.end()) cnt += Map[sum - k];
		Map[sum]++;
	}
	cout<<cnt;

	return 0;
} 