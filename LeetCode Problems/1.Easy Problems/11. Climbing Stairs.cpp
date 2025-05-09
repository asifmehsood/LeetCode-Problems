class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        else if(n == 2) return 2;
        else if(n == 3) return 3;

        int count = 3;
        vector<int> values(n);
        values[0] = 1;
        values[1] = 2;
        values[2] = 3;
        for(int i = 3; i < n; i++)
        {
            values[i] = values[i-1] + values[i-2];
            if(i == n-1)
                count = values[i];
        }
        return count;
    }
};