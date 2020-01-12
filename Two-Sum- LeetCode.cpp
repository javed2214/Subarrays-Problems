// Two Sum LeetCode
// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      
        int n = nums.size();
        unordered_map<int,int> Map;
        for(int i=0;i<nums.size();i++){
            Map[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            if(Map.find(target - nums[i]) != Map.end() and i != Map[target - nums[i]]){
                return {i, Map[target - nums[i]]};
            }
        }
        return {};
    }
};