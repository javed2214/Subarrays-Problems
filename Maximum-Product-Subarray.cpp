// Maximum Product Subarray - LeetCode
// https://leetcode.com/problems/maximum-product-subarray/
// https://www.youtube.com/watch?v=vtJvbRlHqTA

class Solution {
public:
    int maxProduct(vector<int>& a){

    	int prev_max_prod = a[0];
    	int prev_min_prod = a[0];
    	int ans = a[0];
    	int curr_max_prod, curr_min_prod;

    	for(int i=1;i<a.size();i++){

    		curr_max_prod = max({prev_max_prod * a[i], prev_min_prod * a[i], a[i]});
    		curr_min_prod = min({prev_max_prod * a[i], prev_min_prod * a[i], a[i]});
    		ans = max(ans, curr_max_prod);
    		prev_max_prod = curr_max_prod;
    		prev_min_prod = curr_min_prod;
    	}

    	return ans;
    }
};