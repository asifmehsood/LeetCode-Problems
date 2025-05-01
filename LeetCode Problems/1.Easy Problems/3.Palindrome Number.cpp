class Solution {
public:
    bool isPalindrome(int x) {
        string temp = to_string(x);
        for(int i = 0, j = temp.length() -1; i < temp.length(); i++, j--)
        {
            if(temp[i] == temp[j]){
                continue;}
            else
                return false;
        }
        return true;
    }
};