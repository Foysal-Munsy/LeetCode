class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0, right = n-1;
        vector<int> output;
        int sum = 0;
        while(left<right)
        {
            sum = numbers[left] + numbers[right];
            if(sum == target)
            {
                output.push_back(left+1);
                output.push_back(right+1);
                break;
            }
            else if(sum > target)
            {
                right--;
            }
            else 
            {
                left++;
            }
        }
        return output;
    }
};