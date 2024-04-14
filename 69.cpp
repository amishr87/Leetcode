class Solution {
public:
    int mySqrt(int x) 
    {
        int ans;
        int start = 0;
        int end = x;
        long long int mid = start + (end-start)/2;    // means(start+end)/2

        while(start<=end)
        {
            long long int square = mid*mid;
            if(square==x)
            {
                return mid;
            }

            if(x>square)
            {
                ans = mid;
                start = mid+1;
            }
            else if(x<square)   
            {
                end = mid-1;
            }

            mid = start + (end-start)/2;
        }
        return ans;
    }
};
