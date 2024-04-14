class Solution 
{
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        //if(nums.empty())return {};
        //this statement isn't required as it is stated that n>=1

        vector<int>ans;
        sort(begin(nums),end(nums));
        int s = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            /* 
            
            ^ means XOR
            a^a = 0
            a^0 = a

            */
            if(!(s^nums[i]))
            {
                ans.push_back(nums[i]),i+=1;
                if(i<nums.size())
                    s=nums[i];
                else 
                    break;
            }
            else s = nums[i];
        }
        return ans;
    }
};
