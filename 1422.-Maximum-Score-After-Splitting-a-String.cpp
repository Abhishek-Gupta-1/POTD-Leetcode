class Solution
{
public:
    int maxScore(string s)
    {
        int l = 0, r = 0, result = 0;
        int leng = s.length();

        for (int i = 1; i < leng; i++)
        {
            string left = s.substr(0, i);
            string right = s.substr(i, leng - 1);

            for (int j = 0; j < left.length(); j++)
            {
                if (left[j] == '0')
                {
                    l++;
                }
            }

            for (int k = 0; k < right.length(); k++)
            {
                if (right[k] == '1')
                {
                    r++;
                }
            }

            result = max(result, l + r);
            l = 0;
            r = 0;
        }

        return result;
    }
};