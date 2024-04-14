class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;
        while(n!=0)
        {
            sum = sum + n%10;
            product = product*(n%10);
            n = n/10;
        }
        return (product-sum);
    }
};
