class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> v;
        
        for(int i=0;i<nums.size();i++)
        {
           int  x=(nums[i]*nums[i]);
            v.push_back(x);
          // nums[i]=nums[i]*nums[i];
        }
         sort(v.begin(),v.end());
         return v;
        // sort(nums.begin(),nums.end());
        // return nums;
    }
};