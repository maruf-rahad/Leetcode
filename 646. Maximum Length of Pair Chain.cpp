#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int>a, vector<int>b)
{
    return a[1]<b[1];
}

int lis(int i, vector<vector<int> > &pairs, int ara[])
{
    if(ara[i]!=-1)return ara[i];

    int ans = 0;
  //  printf("Yes\n");

    for(int j = i+1;j<pairs.size();j++)
    {
        if(pairs[i][1]<pairs[j][0])
        {
          //  printf("%d %d %d %d\n",i,j,pairs[i][1],pairs[j][0]);
            ans = max(ans,lis(j, pairs, ara));
        }
    }
    ara[i] = ans + 1;

    return ara[i];
}
int findLongestChain(vector< vector<int> > &pairs)
{
    sort(pairs.begin(),pairs.end(),cmp);

    int sz = pairs.size();
    //printf("%d\n",sz);
    int ara[sz+5];

    for(int i=0;i<sz;i++)ara[i] = -1;

    int ans = -1;

    for(int i=0;i<sz;i++)
    {
        int x = lis(i, pairs, ara);
        if(x>ans)
        {
            ans = x;
        }
    }
    return ans;

}

int main()
{
    vector< vector<int> > pairs;
    vector<int>v;

    v.push_back(5);
    v.push_back(24);
    pairs.push_back(v);

    v.clear();
    v.push_back(39);
    v.push_back(60);
    pairs.push_back(v);

    v.clear();
    v.push_back(15);
    v.push_back(28);
    pairs.push_back(v);

    v.clear();
    v.push_back(27);
    v.push_back(40);
    pairs.push_back(v);

    v.clear();
    v.push_back(50);
    v.push_back(90);
    pairs.push_back(v);


    int x = findLongestChain(pairs);

    printf("%d\n",x);

    return 0;
}
