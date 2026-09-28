class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        int curr = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                curr++;
                maxDepth = max(maxDepth, curr);
            }
            else if(s[i] == ')'){
                curr--;
            }
        }
        return maxDepth;
    }
};