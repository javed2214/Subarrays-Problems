// Longest Substring Without Repeating Characters
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length() == 0) return 0;
        
        vector<int> Map(256, -1);
        int start = -1, mx = 0;
        
        for(int i=0;i<s.length();i++){
            if(Map[s[i]] > start) start = Map[s[i]];
            Map[s[i]] = i;
            mx = max(mx, i - start);
        }
        
        return mx;
    }
};