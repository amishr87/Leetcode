class Solution 
{
    public:
    bool isPalindrome(int x) 
    {
        if(x<0)
        {
            return false;
        }

        long long reversed = 0;
        long long refer = x;

        while (refer != 0)
        {
            int digit = refer%10;
            reversed = reversed*10 + digit;
            refer = refer/10;
        }

        if (reversed == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
