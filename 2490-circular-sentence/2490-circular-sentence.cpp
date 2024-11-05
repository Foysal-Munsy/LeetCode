class Solution {
public:
    bool isCircularSentence(string s) {
        string a = "";
        vector<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                st.push_back(a);
                a = "";
            }
            else
            {
                a += s[i];
            }
        }
        if (!a.empty())
        {
            st.push_back(a);
        }
        if(st.size()==1)
        {
            a = st[0];
            if (a[0] == a[a.size() - 1])return true;
            else return false;
        }
        string last_word = st[st.size() - 1], first_word = st[0];
        if (last_word[last_word.size() - 1] != first_word[0])
        {
            return false;
        }
        for (int i = 0; i < st.size() - 1; i++)
        {
            string b = st[i], c = st[i + 1];
            if (c[0] != b[b.size() - 1])
            {
                return false;
            }
        }
        return true;
        }
};