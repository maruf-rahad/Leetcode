class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())return false;

        int ara[200] = {0};
        int ara2[200] = {0};


        for(int i = 0; i<s.size(); i++){
            ara[s[i]]++;
        }

        for(int i = 0; i<t.size(); i++){
            ara2[t[i]]++;
       }

        for(int i = 0; i<200; i++){
            if(ara[i] != ara2[i])return false;
        }
        return true;
    }
};
