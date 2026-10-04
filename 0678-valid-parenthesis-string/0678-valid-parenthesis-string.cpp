class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int low = 0,high = 0;

        for(int i=0; i<n; i++){
            char ch = s[i];

            if(ch == '('){
                low += 1; 
                high += 1;
            }
            else if(ch == ')'){
                low -= 1;
                high -= 1;

            }
            else{
                low -= 1;
                high += 1;
            }

            if(low<0) low = 0;
            if(high<0) return false;
        }


        return (low == 0);
    }
};