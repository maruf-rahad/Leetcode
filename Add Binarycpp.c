class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0, first, second;
        string s = "";
        while(i>=0 || j>=0){

            first = 0;
            second = 0;
            if(i>=0){
                first = a[i] - '0';
            }
            if(j>=0){
                second = b[j] - '0';
            }

            int ans = first + second + carry;
            if(ans == 0){
                s.push_back('0');
                carry = 0;
            }
            else if(ans == 1){
                s.push_back('1');
                carry = 0;
            }
            else if(ans == 2){
                s.push_back('0');
                carry = 1;
            }
            else if(ans == 3){
                s.push_back('1');
                carry = 1;
            }
            i--;
            j--;
        }
        if(carry)s.push_back('1');
        reverse(s.begin(),s.end());
        return s;
    }
};
