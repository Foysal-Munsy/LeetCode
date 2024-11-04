class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        
        set<list<int>>st;
        for(int i=0; i<n-2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int left = i+1 , right = n-1;
            while(left<right)
            {
                int sum = nums[i] + nums[left] + nums[right];
                
                if(sum == 0)
                {
                    st.insert({nums[i],nums[left],nums[right]});
                    left ++, right--;
                }
                else if(sum > 0)
                {
                    right--;
                }
                else 
                {
                    left++;
                }
            }
        }
        vector<vector<int>> result;
        for (const auto& triplet : st) {
            result.push_back(vector<int>(triplet.begin(), triplet.end()));
        }
        return result;
    }
    
};