class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, res = 1, j = 1;
        int n = nums.size();
        while (j < n) {
            if (nums[j] == nums[j - 1]) {
                j++;
                continue;
            } else {
                nums[i + 1] = nums[j];
                i++;
                res++;
                j++;
            }
            
        }
        return res;
    }
};