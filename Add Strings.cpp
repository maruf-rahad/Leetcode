class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size() - 1, j = num2.size() - 1, carry = 0, a;
        string s = "";
        while(i>=0 || j>=0){

            if(i>=0 && j>=0){
                a = num1[i] + num2[j] - 96;
                i--, j--;
            }
            else if(i>=0){
                a = num1[i] - 48;
                i--;
            }
            else if(j>=0){
                a = num2[j] - 48;
                j--;
            }
            s.push_back((a+carry)%10 + 48 );
            carry = (a+carry)/10;

        }
        if(carry>0){
            s.push_back(carry + 48);
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
