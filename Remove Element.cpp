class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int change = 0, changedWith = 0, flag = 0, i = 0;

        while(change < nums.size() && changedWith < nums.size()){

            if(flag == 0 && nums[change] == val){
                flag = 1;
            }
            else if(flag == 0){
                change++;
            }

            if(flag == 1 &&  changedWith>change && nums[changedWith] != val){
                swap(nums[change], nums[changedWith]);
                flag = 0;
                change++;
            }
            else if(flag == 1){
                changedWith++;
            }
        }
        return change;

    }
};
