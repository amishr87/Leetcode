class Solution {
public:
    int maxPoints(vector<vector<int>>& points) 
    {
        int n = points.size();

        if(n<=2) // if the size is 1 or 2 then return 1 or 2 respectively
            return n;

        int maxi = 2;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int count=2;
                for(int k=0; k<n; k++)
                {
                    if(k!=i && k!=j)
                    {
                        //check using slope formula
                        //m=(y2-y1)/x2-x1)
                        if((points[j][1]-points[i][1])*(points[i][0]-points[k][0])
                                                    ==
                        (points[i][1]-points[k][1])*(points[j][0]-points[i][0]))
                            count++;
                    }
                }
                maxi = max(maxi,count);
            }
        }
        return maxi;
    }
};
