class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int i = 0;
        int answerIndex = 0;
        int n = chars.size();

        while(i<n)
        {
            int j = i+1;
            //tranverses to the index where a new element exists or the vector ends
            while(j<n && chars[i]==chars[j])  
            {
                j++;
            }

            chars[answerIndex++] = chars[i]; //stores unique element

            int count = j-i; //finds number of occurrences of the element

            if(count>1)
            {
                //converts count to string so we can extract each character
                string countString = to_string(count); 
                for(char ch:countString)
                {
                    chars[answerIndex++] = ch;
                }
            }
            i = j; //takes i to the next unique character 
        } 
        return answerIndex;
    }
};
