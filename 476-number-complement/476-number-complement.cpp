class Solution
{
    public:
        string tobin(int num)
        {
            string s = "";
            while (num > 0)
            {
                if (num % 2 == 0)
                    s += '0';
                else
                    s += '1';
                num /= 2;
            }
            return s;
        }

    int findComplement(int num)
    {

        string s = tobin(num);
        int sum = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                sum += pow(2, i);
        }
        return sum;
    }
};