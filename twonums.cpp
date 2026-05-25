class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int needed = target - num;

            if (numMap.find(needed) != numMap.end()) {
                return {numMap[needed], i};
            }

            numMap[num] = i;
        }
        
        return{};
    }
};