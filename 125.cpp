class Solution 
{
private:
    bool valid(char ch)
    {
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
        {
            return true;
        }
        return false;
    }
public:
    bool isPalindrome(string s) 
    {
        string filtered;

        for(auto c:s)
        {
            if(valid(c))
            {
                c = tolower(c);
                filtered += c;
            }
        }

        int start = 0;
        int end = filtered.size() - 1;

        while(start<end)
        {
            if(filtered[start] != filtered[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
