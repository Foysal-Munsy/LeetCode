class Solution {
public:
    vector<int> pref,suff,result;
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        pref.resize(n+1, 1);
        suff.resize(n+1,1);
        
        for(int i=0; i<n; i++)
        {
            pref[i+1] = pref[i] * nums[i];
            suff[i+1] = suff[i] * nums[n-1-i];
        }
        pref.pop_back();
        nums.pop_back();
        
        result.resize(n,0);
        for(int i=0; i<n; i++)
        {
            result[i] = pref[i] * suff[n-1-i];
        }
        
        return result;
    }
};