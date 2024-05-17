class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string prefix = "";

        sort(strs.begin(), strs.end());
        int size = strs.size();

        string first = strs[0];
        string last = strs[size-1];

        int countermax = min(first.size(), last.size());
        
        for(int i=0; i < countermax; i++)
        {
            if(first[i] != last[i])
                return prefix;
            prefix += first[i];
        }
        return prefix;
    }
};
