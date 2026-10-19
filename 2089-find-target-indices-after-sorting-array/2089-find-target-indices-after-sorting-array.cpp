class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l=0, r=nums.size()-1;
        int st = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target){
                st = mid;
                r = mid-1;
            }else if(nums[mid] > target ){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        vector<int> ans;
        int i=st;
        while(i < nums.size() && i >= 0 && nums[i] == target){
            ans.push_back(i);
            i++;
        }
        return ans;
    }
};