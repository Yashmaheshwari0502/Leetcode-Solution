class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans1;
        for(int i=0;i<n;i++){
            ans1.push_back(nums[i]);
            ans1.push_back(nums[i+n]);
        }
        return ans1;
    }
};