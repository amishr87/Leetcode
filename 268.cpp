class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int ans = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if(nums[0] == 0)
        {
            if(nums[n-1] != n)
            {
                ans = n;
            }
            else
            {
                for(int i=0; i<n-1; i++)
                {
                    if(nums[i] != (nums[i+1] - 1))
                    {
                        ans = i + 1;
                    }
                }
            }
        }

        return ans;
    }
};
