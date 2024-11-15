class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int start = -1, end = 0, cnt = 0, ans = 0, sz = arr.size();
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] < arr[i-1]){
                start  = i-1;
                break;
            }
        }

        if(start == -1) return 0;

        for(int i = arr.size()-1; i >= 1; i--) {
            if(arr[i] < arr[i-1])
            {
                end = i;
                break;
            }
        }

        if(start == 0 && end == arr.size())
        {
            if(arr.size() > 1 && arr[0] <= arr[arr.size() - 1]) return arr.size() - 2;

            return arr.size() - 1;
        }
        ans = min(sz - start - 1, end);

        int i = 0, j = end;
        while(i <= start && j <= arr.size() - 1){
            if(arr[i] <= arr[j]){
                ans = min(ans, j - i - 1);
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};
