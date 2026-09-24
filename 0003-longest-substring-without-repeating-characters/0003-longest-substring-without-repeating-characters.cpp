class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char,int> mp;
        int left = 0;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
            while(mp[s[i]] > 1 && left <= i){
                mp[s[left++]]--;
            }
            ans = max(ans, i-left+1);
        }
        return ans;
    }
};