class Solution {
public:
    int minChanges(string s) {
        int n = s.size() , count = 0;
    for (int i = 0; i < n - 1; i += 2)
        {
            if ((s[i] - '0' + s[i + 1] - '0') % 2 == 0)
                continue;
            else
                count++;
        }
        return count;
    }
};