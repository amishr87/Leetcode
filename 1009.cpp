class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        //dealing with edge case
        if(n==0) //compliment of 0 is 1
        {
            return 1;
        }

        while(m != 0)
        {
            mask = (mask<<1) | 1;
            m = m >> 1;
        }

        int num = (~n) & mask;
        return num;
    }
};
