class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        char a = word[0];
        int count = 0;
        for(int i=0; i<word.size(); i++)
        {
            if(a==word[i])
            {
                if(count == 9)
                {
                    comp += (to_string(count) + a);
                    a=word[i];
                    count =0; 
                }
                count++;
            }
            else
            {
                //string b = to_string(count) + a;
                    comp += (to_string(count) + a);
                    a=word[i];
                    count =1;
                
            }
        }
        comp += (to_string(count) + a);
        return comp;
    }
};