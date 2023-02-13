
int LIS(int i, vector<int>& nums,int ara[])
{
    if(ara[i]!=-1)return ara[i];

    int ans = 0;
    for(int j = i+1;j<nums.size();j++)
    {
        if(nums[j]>nums[i])
        {
            ans = max(ans,LIS(j,nums,ara));
        }
    }
    ara[i] = ans+1;
    return ara[i];
}


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        int sz = nums.size();
    int ara[sz];

    for(int i=0;i<sz;i++)
    {
        ara[i] = -1;
    }

    int ans = -1;
    for(int i=0;i<sz;i++)
    {
        int x = LIS(i, nums, ara);
        if(x>ans)ans = x;
       // printf("i= %d, %d\n",i,x);
    }
    return ans;

    }
};
