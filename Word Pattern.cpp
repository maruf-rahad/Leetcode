class Solution {
public:
    bool wordPattern(string pattern, string s) {

        map<char,string>mp;
        map<string, char> mp2;
        vector<string>v;
        vector<string>v2;
        string x;

        stringstream ss2(s);
        while(ss2>>x){
            v2.push_back(x);
        }
        if(pattern.size()!=v2.size())return false;
        int i = 0;
                stringstream ss(s);

        while(ss>>x){
            v.push_back(x);
            if(mp2.find(x) == mp2.end()){
                mp2[x] = pattern[i++];
            }
            else{
                if(mp2[x] != pattern[i++]){
                    return false;
                }
            }
        }


        int sz = pattern.size();

        for(i = 0; i < sz; i++){
            if(mp.find(pattern[i]) == mp.end()){
                mp[pattern[i]] = v[i];
            }
            else{
                if(mp[pattern[i]] != v[i]) return false;
            }
        }
        return true;
    }
};
