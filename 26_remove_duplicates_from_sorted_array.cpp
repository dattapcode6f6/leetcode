class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int a = 0;
        for(int i = 1; i<nums.size(); i++) {
            if(nums[a] != nums[i]) {
                nums[++a] = nums[i];
            }
        }
        return a + 1;
    }
};