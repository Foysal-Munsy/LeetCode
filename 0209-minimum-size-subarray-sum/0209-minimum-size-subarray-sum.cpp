class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<int>pref(nums.size()+1,0);
        // partial_sum(nums.begin(),nums.end(),pref.begin()+1);
        for(int i=0; i<nums.size(); i++)
        {
            pref[i+1] = pref[i]+nums[i];
            if(nums[i] >= target)
            {
                return 1;
            }
        }
        if(pref.back()<target) return 0;
        int req_sum = 0, min_sub = INT_MAX;
        for(int i=0; i<pref.size(); i++)
        {
            req_sum = target + pref[i];
            auto it = lower_bound(pref.begin(),pref.end(),req_sum);
            if(it != pref.end())
            {
                int j = it - pref.begin();
                min_sub = min(min_sub, j - i);
            }
            else break;
            
        }
 
        return min_sub;
    }
};