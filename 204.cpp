class Solution {
public:
    int countPrimes(int n) 
    {
        int count = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++)
        {
            if(prime[i])
            {
                count++;

                //mark all multiples of i as non prime
                // j=2*i so that we start loop from first multiple of i
                for(int j=2*i; j<n; j=j+i)
                {
                    prime[j] = false;
                }
            }
        }

        return count;
    }
};
