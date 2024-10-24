class Solution
{
public:
    vector<int> pref;
    unordered_map<int, int> mp;
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        pref.resize(n + 1, 0);
        int count = 0, sum = 0;
        mp[0]=1;

        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + nums[i];
            int sum = pref[i + 1];
            if (mp.find(sum - k) != mp.end())
            {
                count += mp[sum - k];
            }
            mp[sum]++;
        }
        return count ;
    }
};