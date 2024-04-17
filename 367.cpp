class Solution {
public:
    bool isPerfectSquare(int num) {


        for(long i = 1; i <= num; i++)
        {
            if((i*i) == num)
                return true;

            if((i*i) > num)
                break;
        }
        return false;
    }
};
