#include <vector>
#include <algorithm>

class Solution {
    public:
        std::vector<int> topKFrequent(std::vector<int>& nums, int k){
            sort(nums.begin(), nums.end());
            std::vector<int> res = {0, 0, 0, 0}; // the first one is the lower
            int element, freq;
            std::vector<int>::iterator it;
            while(nums.size() > 0){
                freq = 0;
                while(find(nums.begin() + 1, nums.end(), nums[0]) != nums.end()){
                    it = find(nums.begin() + 1, nums.end(), nums[0]);
                    element = nums[0];
                    freq++;
                    nums.erase(it);
                }
                *it = 0;
                if (res.size() < k * 2){
                    res.push_back(element);
                    res.push_back(freq);
                }
                else{
                    
                }
                nums.erase(it);
                if (freq > res[3]){
                    res[2] = element;
                    res[3] = freq;
                }
                else if (freq > res[1]){
                    res[0] = element;
                    res[1] = freq;
                }
            }
            return {res[2]};
        }
};