int calculateVal(char s)
        {
            if(s == 'M')
                return 1000;
            else if(s == 'D')
                return 500;
            else if(s == 'C')
                return 100;
            else if(s == 'L')
                return 50;
            else if(s == 'X')
                return 10;
            else if(s == 'V')
                return 5;
            else if(s == 'I')
                return 1;
            return 0;
        }
class Solution {
public:
    int romanToInt(string s) {
        if(s.length() == 0)
        {
            return 0;
        }
        
        int total = 0, temp1 = 0, temp2 = 0;
        for(int i = 0; i < s.length(); i++)
        {
            temp1 = calculateVal(s[i]);
            temp2 = calculateVal(s[i+1]);
            if(temp2 > temp1)
            {
                temp1 = temp2 - temp1;
                total = total + temp1;
                i++;
            }
            else{
                total = total + temp1;
            }
        }
        return total;
    }
};
