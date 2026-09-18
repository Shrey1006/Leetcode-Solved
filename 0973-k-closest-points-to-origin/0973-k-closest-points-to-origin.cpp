class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,int>> pq;
        for(int i = 0; i < points.size(); i++){
            auto pt = points[i];
            double distance = sqrt(pow(pt[0], 2) + pow(pt[1], 2));
            pq.push({distance, i});
        }
        while(pq.size() > k) pq.pop();
        vector<vector<int>> ans;
        while(!pq.empty()){
            int i = pq.top().second;
            pq.pop();
            ans.push_back({points[i][0], points[i][1]});
        }
        return ans;
    }
};