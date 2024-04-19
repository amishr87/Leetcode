class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        vector<int> freq(128, -1);
        int longest=0;

        int i=0,j=0;

        while(j<s.length())
        {
            if(freq[s[j]] >= i)
                i = freq[s[j]]+1;

            else
            {
                freq[s[j]] = j;
                longest = max(longest, j-i+1);
                j++;
            }
        }
        return longest;       
    }
};
