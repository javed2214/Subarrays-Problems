// Program to Print All Subarrays with Zero Sum
// https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int a[n];

	for(int i=0;i<n;i++) cin>>a[i];

	int curr_sum = 0;

	unordered_map <int,vector<int>> Map;
	vector <pair<int,int>> out;

	for(int i=0;i<n;i++){

		curr_sum += a[i];

		if(curr_sum == 0) out.push_back({0,i});

		if(Map.find(curr_sum) != Map.end()){

			vector <int> v = Map[curr_sum];

			for(auto it:v) out.push_back({it+1, i});
		}
		Map[curr_sum].push_back(i);
	}

	cout<<"\nIndices:\n";

	for(auto it:out)
		cout<<"("<<it.first<<", "<<it.second<<")"<<endl;

	return 0;
}