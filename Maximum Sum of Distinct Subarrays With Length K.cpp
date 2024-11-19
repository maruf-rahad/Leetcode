class Solution {
public:
int ara[100005] = {0};
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum =0;
        long long cnt = 0;
        long long ans = 0;
        int i = 0, j = 0;

        for(i = 0; i < k; i++){
            if(ara[nums[i]] != 0){
                cnt++;
            }
            ara[nums[i]]++;
            sum+=nums[i];
        }

        j = 0;
        if(cnt == 0) ans = sum;
        while(i < nums.size()) {
            sum-=nums[j];
            sum+=nums[i];
            ara[nums[j]]--;

            if(ara[nums[j]] > 0){
                cnt--;
            }
            if(ara[nums[i]] != 0){
                cnt++;
            }
            ara[nums[i]]++;
            if(cnt == 0){
                if(sum >= ans) ans = sum;
            }
            i++;
            j++;
        }
        return ans;
    }
};
