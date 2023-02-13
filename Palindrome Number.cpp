class Solution {
public:
    bool isPalindrome(int x) {

        long long ans = 0L, n = x;

        while(x!=0){
            ans = ans*10 + x%10;
            x/=10;
        }

        if(ans==n && n>=0)return true;
        else return false;
    }
};
