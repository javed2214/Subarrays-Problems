// Program to Find the Length of Largest Subarray With Zero Sum
// https://www.geeksforgeeks.org/find-the-largest-subarray-with-0-sum/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	int curr_sum = 0, mx = 0;
	unordered_map <int,int> Map;
	
	for(int i=0;i<n;i++){

		curr_sum += a[i];

		if(curr_sum == 0 and mx == 0) mx = 1;
		
		if(curr_sum == 0) mx = i + 1;

		if(Map.find(curr_sum) != Map.end()) mx = max(mx, i - Map[curr_sum]);

		else Map[curr_sum] = i;
	}

	cout<<mx;

	return 0;
}