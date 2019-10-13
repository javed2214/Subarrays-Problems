// Size of Subarray With Max Sum
// https://www.geeksforgeeks.org/size-subarray-maximum-sum/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[] = {1,-2,1,1,-2,1};
	int n = sizeof(a) / sizeof(int);

	int sum = 0, mx = INT_MIN, s = 0;
	int start = 0, end = 0;

	for(int i=0;i<n;i++){

		sum += a[i];

		if(sum > mx){
			mx = sum;
			start = s;
			end = i;
		}
		
		if(sum < 0){
			sum = 0;
			s = i + 1;
		}
	}

	cout << (end - start + 1);

	return 0;
}