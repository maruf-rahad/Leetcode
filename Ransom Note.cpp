class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int ara[27] = {0}, ara2[27] = {0}, szr = ransomNote.size(),szm = magazine.size(), i;

        for(i = 0; i<szr; i++){
            ara[ransomNote[i] - 'a']++;
        }

        for(i = 0; i<szm; i++){
            ara2[magazine[i] - 'a']++;
        }

        for(i = 0; i<=26; i++){
            if(ara[i]>ara2[i])return false;
        }

        return true;
    }
};
