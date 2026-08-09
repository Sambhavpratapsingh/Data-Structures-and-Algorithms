class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int temp=0;
        for(int num : nums){
            temp=temp+num;
            ans.push_back(temp);
        }
        return ans;
    }
};