class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool check = true;
        string ans = "";
        char alp;
        for(int i = 0; i < strs[0].size(); i++){
            alp = strs[0][i];
            for(int j = 0; j < strs.size(); j++){
                if(alp != strs[j][i]){
                    check = false;
                }
            }
            if(check == true){
                ans += alp;
            }
        }
        return ans;
    }
};