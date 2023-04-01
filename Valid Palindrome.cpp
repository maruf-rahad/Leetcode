class Solution {
public:
    bool isPalindrome(string s) {


        int i = 0, j = s.size() - 1;

        while(i<j){


        	 if((isLetter(s[i]) && isLetter(s[j])) && (isLower(s[i]) == isLower(s[j]))){
        	 	i++;
        	 	j--;
        	 }
            else if(!isLetter(s[i])){
                i++;
            }
            else if(!isLetter(s[j])){
                j--;
            }
            else{
                return false;
            }
        }

        return true;
    }

char isLower(char ch){
        if(ch>='A' && ch<='Z'){
            ch = ch + 32;
        }
        return ch;

   }

bool isLetter(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        	return true;
        }

        return false;
    }
};
