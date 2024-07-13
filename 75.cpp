//TC: O(n);
//SC: O(1);
class Solution {
public:
    void sortColors(vector<int>& nums) {

        int red = 0;
        int white = 0;
        int blue = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==0)
            {
                red++;
            }
            else if(nums[i]==1)
            {
                white++;
            }
            else
            {
                blue++;
            }
        }

        int total = red + white + blue;

        //fill funtion fills the postions in the array range assigned 
        //with the number given as the last parameter
        fill(nums.begin(), nums.begin() + red, 0);
        fill(nums.begin() + red , nums.begin() + red + white, 1);
        fill(nums.begin() + red + white, nums.begin() + total, 2);
    }
};
