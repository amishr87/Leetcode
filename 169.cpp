class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        sort(begin(nums), end(nums)); 
        

        if(n > 1)
        {
            return nums[n/2];
        }
        else
        {
            return nums[0];
        }
    }
};
