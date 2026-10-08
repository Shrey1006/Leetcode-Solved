class Solution {
public:
    string removeOuterParentheses(string s){
        int outp = 1;
        int count = 1;
        string ans;
        int i = 1;

        while( i != s.size() ){
            
            if( s[i] == '('  ){
                if( outp == 0 ){
                    outp++;
                    count++;
                    i++;
                    continue;
                }
                count++;
                ans.push_back(s[i]);
                i++;
            }
            else{
                --count;
                if( count == 0 ){
                    outp--;
                    i++;
                    continue;
                }
                ans.push_back(s[i]);
                i++;
            }
        }

        if( outp != 0 ){
            return "invalid paranthesis";
        }
        s = ans;
        return s;
    }
};