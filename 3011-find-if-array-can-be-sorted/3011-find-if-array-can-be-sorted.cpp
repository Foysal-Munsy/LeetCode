class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>bits(n,0),an;
        an = nums;
        sort(an.begin(), an.end());
        for (int i = 0; i < n; i++)
        {
            int set_bits = bitset<32>(nums[i]).count();
            bits[i] = set_bits;
        }
        bool ans = true;
        int j = 0;
        while (j < n)
        {
            for (int i = n - 1; i > 0; i--)
            {
                if (nums[i] < nums[i - 1])
                {
                    if (bits[i] == bits[i - 1])
                    {
                        swap(nums[i], nums[i - 1]);
                    }
                    else
                    {
                        ans = false;
                    }
                }
            }
            j++;
        }

        // for (auto &i : nums)
        //     cout << i << " ";
        if (an != nums)
            ans = false;
        
        return (ans? true:false);
    }
};