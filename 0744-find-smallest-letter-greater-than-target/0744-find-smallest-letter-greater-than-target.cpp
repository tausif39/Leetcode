
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int s = 0, e = letters.size() - 1, mid;

        while (s <= e)
        {

            mid = s + (e - s) / 2;
            if (letters[mid] <= target)
            {
                s = mid + 1;
            }

            else
            {
                e = mid - 1;
            }
        }

        return letters[s% letters.size()];
    }
};