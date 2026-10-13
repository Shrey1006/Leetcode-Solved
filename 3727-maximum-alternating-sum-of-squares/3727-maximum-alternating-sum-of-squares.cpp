class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> temp(nums.size());
        for(int i=0;i<nums.size(); i++){
            temp[i] = 1LL* nums[i]* nums[i];
        }
        sort(temp.begin(), temp.end());
        long long ans = 0;
        int k = nums.size()/2;

        for(int i=0; i<k; i++){
            ans -= temp[i];
        }
        for(int i=k; i<nums.size(); i++){
            ans += temp[i];
        }

        return ans;
    }
};