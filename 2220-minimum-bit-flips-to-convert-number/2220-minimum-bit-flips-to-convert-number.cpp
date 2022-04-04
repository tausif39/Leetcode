class Solution
{
    public:
        int minBitFlips(int start, int goal)
        {
            int cnt = 0;
            for (int i = 32; i >= 0; i--)
            {
				int current = ((long long)1 << i) & start;
                int required = ((long long)1 << i) & goal;
                if (required != current)
                    cnt++;
            }
            return cnt;
        }
};