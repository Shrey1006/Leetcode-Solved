class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mppS;
        unordered_map<char,int> mppT;
        for(char c : t) mppT[c]++;
        int have = 0, need = mppT.size();
        int l = 0;
        int minLen = INT_MAX;
        int start = 0;

        for(int r = 0; r < s.size(); r++){
            char c = s[r];
            mppS[c]++;

            if(mppT.count(c) && mppS[c] == mppT[c]){
                have++;
            }

            while(have == need){
                if(r - l + 1 < minLen){
                    minLen = r - l + 1;
                    start = l;
                }

                mppS[s[l]]--;
                if(mppT.count(s[l]) && mppS[s[l]] < mppT[s[l]]){
                    have--;
                }
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};