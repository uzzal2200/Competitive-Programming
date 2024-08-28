class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int s = nums.size();
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            v.push_back(nums[i]);
            v.push_back(nums[i+n]);
        }
        return v;
    }
};