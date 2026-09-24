class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, ans = 0;
        for(int i=0; i<k; i++) lsum += cardPoints[i];
        ans = lsum;
        int r = cardPoints.size()-1;
        for(int i=k-1; i>=0; i--){
            lsum -= cardPoints[i];
            lsum += cardPoints[r--];
            ans = max(ans,lsum);
        }
        return ans;
    }
};