class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int s = nums.size();
        if(s!=1)
        {
            k = k%s;
            vector<int> nums2(s);
            for(int i=0; i<k; i++)
            {
                nums2[i] = nums[s-k+i];
            }
            int x = 0;
            for(int j=k; j<s; j++)
            {
                nums2[j] = nums[x++];
            }
            for(int y=0; y<s; y++)
            {
                nums[y] = nums2[y];
            }
        }
    }
};
