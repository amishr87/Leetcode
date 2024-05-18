class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int index;
        int nedlen = needle.size();
        int haylen = haystack.size();

        for (int i=0; i<(haylen-nedlen+1); i++)
        {
            string compare = "";
            if(haystack[i] == needle[0])
            {
                for(int j=0; j<nedlen; j++)
                {
                    compare += haystack[i+j];
                }

                if(compare == needle)
                    return i;  
            }
        }
        return -1;
    }
};
