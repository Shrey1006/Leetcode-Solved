class Solution {
public:
    bool checkString(string s) {
        int cnt = 0;
        char curr = 'a';
        for(int i=0; i<s.size(); i++){
            if(s[i] != curr && cnt < 2){
                curr = s[i];
                cnt++;
            }else if(s[i] == curr && cnt < 2){
                continue;
            }else{
                return false;
            }
        }
        if(cnt > 1) return false;
        return true;
    }
};