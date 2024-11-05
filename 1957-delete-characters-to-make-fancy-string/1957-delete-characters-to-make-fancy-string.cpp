class Solution {
public:
    string makeFancyString(string s) {
        string st = "";
        int n = s.size(), count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1] && s[i] == s[i + 2] )
            {
                continue;
            }
            else
            {
                st += s[i];
            }
        }
        return st;
    }
};