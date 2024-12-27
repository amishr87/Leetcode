class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int> ans;

        for(int i=0; i<=n; i++)
        {
            ans.push_back(calcOneBits(i));
        }
        return ans;
    }
private:
    int calcOneBits(int index)
    {
        int count = 0;
        while(index!=0)
        {
            if(index&1)
            {
                count++;
            }
            index = index >> 1;
        }
        return count;
    }
};
