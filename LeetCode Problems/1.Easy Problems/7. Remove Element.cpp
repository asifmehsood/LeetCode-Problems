class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0) return 0;
        
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        int k = nums.size();
        
        return k;
    }
};
