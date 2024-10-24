class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
                nums[i] = -1;
        }
        vector<int> pref(n + 1, 0);
        partial_sum(nums.begin(),nums.end(), pref.begin() + 1);
        int max_len = 0;
        unordered_map<int,int>mp;
        for (int i = 1; i <= n; i++)
        {
            int sum = pref[i];
            if (sum == 0)
            {
                max_len = max(max_len, i);
            }
            if(mp.find(sum) !=mp.end())
            {
                int curr_len = i - mp[sum];
                max_len = max(max_len,curr_len);
            }
            else
            {
                mp[sum] = i;
            }
        }
        return max_len;
    }
};