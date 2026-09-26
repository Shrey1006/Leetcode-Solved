class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans = "";
        unordered_map<string,string> mpp;
        for(auto& it : knowledge) mpp[it[0]] = it[1];
        for(int i=0; i<s.size(); i++){
            if (s[i] == '(') {
                int j = s.find(")", i + 1);
                auto t = s.substr(i + 1, j - i - 1);
                ans += mpp.count(t) ? mpp[t] : "?";
                i = j;
            } else
                ans += s[i];
        }
        return ans;
    }
};