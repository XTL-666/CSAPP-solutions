class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() < 3){
            return nums.size();
        }
        const int n = nums.size();
        int index = 0;
        for(int i = 1;i < n;i++){
            if(i > 0 && i < n - 1 && nums[i-1] == nums[i]&& nums[i] == nums[i + 1]){
                continue;
            }
            nums[++index] = nums[i];
        }
        return index + 1;
    }
};