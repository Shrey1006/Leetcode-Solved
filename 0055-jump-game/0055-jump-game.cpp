class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mxjmp = 0;
        for(int i=0; i<nums.size(); i++){
            if(i > mxjmp ) return false;
            mxjmp = max(mxjmp, i+nums[i]);
        }
        return true;
    }
};