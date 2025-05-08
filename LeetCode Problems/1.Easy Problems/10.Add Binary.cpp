class Solution {
public:
    string addBinary(string a, string b) {
        int lena = a.length();
        int lenb = b.length();
        int lengthForIteration = 0, resultOfTwoBinaries = 0;
        string binaryResult;
        char ch1, ch2;
        int num1 = 0, num2 = 0;
        char ch3, ch4;
        int num3 = 0, num4 = 0;

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        if(a.length() < b.length())
        {
            for(int i = a.length(); i < b.length(); i++)
                a += '0';
        }
        if(a.length() > b.length())
        {
            for(int i = b.length(); i < a.length(); i++)
                b += '0';
        }

        lengthForIteration = (lena > lenb)? lena : lenb;
        for(int i = 0; i < lengthForIteration; i++)
        {
            ch1 = a[i];
            ch2 = b[i];
            num1 = ch1 - '0';
            num2 = ch2 - '0';
            resultOfTwoBinaries = num1 + num2;

            if(resultOfTwoBinaries == 0 || resultOfTwoBinaries == 1)
            {
                binaryResult += to_string(resultOfTwoBinaries);
            }
            else if(resultOfTwoBinaries == 2)
            {
                binaryResult += '0';
                ch3 = a[i+1];
                ch4 = b[i+1];
                num3 = ch3 - '0';
                num4 = ch4 - '0';
                if(a.length() > b.length())
                {
                    if((a.length() - 1) == i)
                    {
                        binaryResult += '1';
                        break;
                    }
                    num3++;
                    ch3 = num3 + '0';
                    a[i+1] = ch3;
                }
                else
                {
                    if((b.length() - 1) == i)
                    {
                        binaryResult += '1';
                        break;
                    }
                    num4++;
                    ch4 = num4 + '0';
                    b[i+1] = ch4;
                }

            }
            else if(resultOfTwoBinaries == 3)
            {
                binaryResult += '1';
                ch3 = a[i+1];
                ch4 = b[i+1];
                num3 = ch3 - '0';
                num4 = ch4 - '0';
                if(a.length() > b.length())
                {
                    if((a.length() - 1) == i)
                    {
                        binaryResult += '1';
                        break;
                    }
                    num3++;
                    ch3 = num3 + '0';
                    a[i+1] = ch3;
                    

                }
                else
                {
                    if((b.length() - 1) == i)
                    {
                        binaryResult += '1';
                        break;
                    }
                    num4++;
                    ch4 = num4 + '0';
                    b[i+1] = ch4;
                }
            }
        }
        reverse(binaryResult.begin(), binaryResult.end());
        return binaryResult;
    }
};