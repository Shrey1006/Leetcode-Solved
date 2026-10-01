class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        stack<char> opn;
        // stack<char> close;
        int i = 0;
        while(i <= size-1){
            if( s[i] == '(' || s[i] == '[' || s[i] == '{'){
                opn.push(s[i]);
            }
            else{
                if (opn.empty()) return false;

                if( s[i] == ')' && opn.top() == '(' ) opn.pop();
                else if( s[i] == ']' && opn.top() == '[' ) opn.pop();
                else if( s[i] == '}' && opn.top() == '{' ) opn.pop();
                else{
                    return false;
                }
            }
            i++;
        }
        return opn.empty();
    }
};