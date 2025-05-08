class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 0) return 0;
        int temp1 = 0, temp2 = 0, count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ')
            {
                temp2 = i;
                if(s[i+1] != ' ' && s[i+1] != '\0')
                {
                    temp1 = i;
                }
            }
        }
        for(int j = temp1; j < s.length(); j++)
            {
                if(s[j] != ' ')
                    count++;
            }
        return count;
    }
};
