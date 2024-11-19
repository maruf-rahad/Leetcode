class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int>st;
        int p = 0;

        for(int i = 0; i<popped.size(); i++){
            if(st.empty() || st.top() != popped[i]){
                if(p == pushed.size())break;
                st.push(pushed[p]);
                p++;
                i--;
            }
            else{
                st.pop();
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};
