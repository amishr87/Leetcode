class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int x = nums2[0] - nums1[0];
        return x;
    }
};
