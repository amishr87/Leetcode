class Solution 
{
    public:
        int pivotIndex(vector<int>& num) 
        {
            int sum = 0;
            for(int i=0; i<num.size(); i++)
            {
                sum += num[i];
            }
            
            int left = 0;
            int right = sum;
            
            for(int i=0; i<num.size(); i++)
            {
                right = right - num[i];
                if(left == right)
                {
                    return i;
                }
                else
                    left = left + num[i];
            }
            return -1;
        }
};
