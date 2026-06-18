class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        int size = nums1.size() + nums2.size();
        int middleSize = std::floor((nums1.size() + nums2.size()) / 2);
        int middles;
        int i = 0,j = 0, prev, curr;
        while(i + j < middleSize + 1){
            prev = curr;
            if (nums1[i] > nums2[j]){
                curr = nums2[j];
                j++;
            }
            else
            {
                curr = nums1[i];
                i++;
            }
        }
        if (size % 2 == 0)
            return (curr + prev) / 2.0;
        else
            return curr;
    }
};