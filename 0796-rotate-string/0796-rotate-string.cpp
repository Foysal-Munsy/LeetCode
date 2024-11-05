class Solution {
public:
    void rotate_str(string &s)
    {
        if(s.empty()) return;
        char last_char = s.back();
        s.pop_back();
        s.insert(s.begin(),last_char);
    }
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        for(int i=0; i<s.size(); i++)
        {
            if(s==goal) return true;
            else
            {
                rotate_str(s);
            }
        }
        return false;
    }
};