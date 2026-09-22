class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pre = 1, post = 1;
        int ans = INT_MIN;

        for( int i = 0; i<n ; i++){
            if( pre == 0) pre = 1;
            if( post == 0) post = 1;
            
            pre = pre * nums[i];
            post = post * nums[n-i-1];

            ans = max( ans, max(pre, post));
        }

        return ans;
    }
};