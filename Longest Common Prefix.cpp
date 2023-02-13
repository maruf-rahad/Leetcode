class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string s = strs[0], ans = "";

        for(int i=0; i<=s.size(); i++){
            string substr = s.substr(0,i);
            int flag = 0;

            for(int j=0; j<strs.size(); j++){
                if(strs[j].substr(0,i) != substr)
                    return ans;
            }
            ans = substr;
        }

        return ans;

    }
};
