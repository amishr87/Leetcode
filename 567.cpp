class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int count1[26] ={0};
        int l1 = s1.length();
        int l2 = s2.length();

        for(int i=0; i<l1; i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        for(int j=0; j<(l2-l1+1); j++)
        {
            int countTemp[26] = {0};
            for(int k=j; k<(j+l1); k++)
            {
                int indexTemp = s2[k] - 'a';
                countTemp[indexTemp]++;
            }
            if(equal(begin(countTemp), end(countTemp), begin(count1)))
            {
                return true;
            }
        }
        return false;
    }
};

//self solved!!
