// Check Whether an Array is a Subset of Another Array using HashMap
// https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-using-map/

#include<bits/stdc++.h>
using namespace std;

bool isSubset(int *a1, int n1, int *a2, int n2){

	unordered_map <int,int> Map;

	for(int i=0;i<n1;i++) Map[a1[i]]++;

	for(int i=0;i<n2;i++){

		if(Map.find(a2[i]) == Map.end())
			return false;

		else{
			Map[a2[i]]--;
			if(Map[a2[i]] == 0) Map.erase(a2[i]);
		}		
	}
	return true;
}

int main(){

	int a1[] = {11, 1, 13, 21, 3, 7}; 
    int a2[] = {11, 3, 7, 1};

    int n1 = sizeof(a1) / sizeof(int); 
    int n2 = sizeof(a2) / sizeof(int);

    bool x = isSubset(a1,n1,a2,n2);

    if(x) cout<<"Yes";
    else cout<<"No";

    return 0;
}