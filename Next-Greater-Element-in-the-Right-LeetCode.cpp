// Next Greater Element in the Right - LeetCode
// https://www.youtube.com/watch?v=rSf9vPtKcmI
// https://www.youtube.com/watch?v=XP8iEi9Aa8c


// Method - 1
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> Map;
        stack <int> s;
        for(auto it: nums2){
            while(s.size() and it > s.top()){
                Map[s.top()] = it;
                s.pop();
            }
            s.push(it);
        }
        vector <int> v;
        for(auto it: nums1){
            if(Map.count(it)) v.push_back(Map[it]);
            else v.push_back(-1);
        }
        return v;
    }
};


// Method - 2
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size() == 0) return {};
        int n = nums2.size();
        unordered_map <int, int> Map;
        vector <int> v;
        stack <int> s;
        s.push(nums2[n-1]);
        Map[nums2[n-1]] =-1;
        for(int i = n-2; i >= 0; i--){
            while(s.size() and nums2[i] > s.top()) s.pop();
            if(s.empty()) Map[nums2[i]] = -1;
            else Map[nums2[i]] = s.top();
            s.push(nums2[i]);
        }
        for(auto it: nums1) v.push_back(Map[it]);
        
        return v;
    }
};