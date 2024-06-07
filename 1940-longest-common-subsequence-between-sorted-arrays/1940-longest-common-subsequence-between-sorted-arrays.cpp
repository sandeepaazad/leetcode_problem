class Solution {
public:
    vector<int> longestCommonSubsequence(vector<vector<int>>& arrays) {
        vector<int> sorted = arrays[0];
        for (const auto& array : arrays) {
            if (array.size() < sorted.size()) {
                sorted = array;
            }
        }
        vector<int> longest;
        for (int num : sorted) {
            bool isCommon = true;
            for (const auto& array : arrays) {
                if (!binarysearch(num, array)) {
                    isCommon = false;
                    break;
                }
            }
            if (isCommon) {
                longest.push_back(num);
            }
        }
        
        return longest;
    }

private:
    bool binarysearch(int target, const vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
