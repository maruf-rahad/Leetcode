#include<bits/stdc++.h>
using namespace std;


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
int main()
{
    int ara[8] = {7,7,7,7,7,7,7,7};

 //   int ara[8] = {10,9,2,5,3,7,101,18};

    vector<int>v;

    for(int i=0;i<8;i++)
    {
        v.push_back(ara[i]);
    }
    int x = lengthOfLIS(v);

    printf("x = %d\n",x);






return 0;
}
