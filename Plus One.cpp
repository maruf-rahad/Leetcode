class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;

        for(int i = digits.size()-1; i>=0; i--){

            int x = (digits[i] + carry) / 10;
            digits[i] = (digits[i] + carry) %10;
            carry = x;
        }

        if(!carry) return digits;

        else{
            int next, current = carry;
            for(int i=0; i<digits.size(); i++){
                next = digits[i];
                digits[i] = current;
                current = next;
            }
            digits.push_back(current);
        }
        return digits;
    }
};
