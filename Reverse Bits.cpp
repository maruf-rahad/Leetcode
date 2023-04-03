class Solution {
public:
    uint32_t reverseBits(uint32_t n) {

        string s;

        while(n!=0){
            if(n%2){
                s+="1";
            }
            else{
                s+="0";
            }
            n/=2;
        }
        while(s.size() != 32)s+="0";

        uint32_t sum = 0, i = 0;

        while(i<s.size()){
            sum += (s[31-i] - '0') * pow(2,i++);
        }

        return sum;
    }
};
