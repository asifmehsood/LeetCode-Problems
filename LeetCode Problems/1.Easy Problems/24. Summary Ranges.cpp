class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        if (n == 0) return result;

        int start = nums[0];

        for (int i = 1; i < n; ++i) {
            // If not consecutive
            if (nums[i] != nums[i - 1] + 1) {
                if (start == nums[i - 1])
                    result.push_back(to_string(start));
                else
                    result.push_back(to_string(start) + "->" + to_string(nums[i - 1]));

                start = nums[i];
            }
        }

        // Add the last range
        if (start == nums[n - 1])
            result.push_back(to_string(start));
        else
            result.push_back(to_string(start) + "->" + to_string(nums[n - 1]));

        return result;
    }
};
