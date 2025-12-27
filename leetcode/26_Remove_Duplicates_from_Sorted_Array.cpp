class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto last = unique(nums.begin(), nums.end());

        // 3. Erase the elements from the new logical end to the actual end of the vector.
        nums.erase(last, nums.end());
        return nums.size();
    }
};