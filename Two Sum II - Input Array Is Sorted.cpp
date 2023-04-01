class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> v;
        for(int i = 0; i<numbers.size(); i++){

            int ans = findIndex(i+1, numbers.size()-1, target-numbers[i], numbers);
            if(ans!=-1){
                v.push_back(i+1);
                v.push_back(ans+1);
            }

        }
        return v;
    }

    int findIndex(int low, int high, int target, vector<int>& numbers){

        while(low<=high){
            int mid = (low+high)/2;

            if(numbers[mid] == target){
                return mid;
            }
            else if(numbers[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};
