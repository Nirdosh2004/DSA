class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        string res = "";
        int count = 0;
        for(auto it : s){
            if( it == '('){
                count++;
                res.push_back(it);
            }
            else if( it == ')'){
                count--;
                res.push_back(it);
                if(count == 0){
                    res.pop_back();
                    res.erase(res.begin());
                    ans += res;
                    res.clear();
                }
            }
        }
        return ans;
    }
};
