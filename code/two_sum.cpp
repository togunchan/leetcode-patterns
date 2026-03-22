// Pattern: Hash Map
// Idea: Store value -> index, check complement in O(1)

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); ++i)
        {
            int x = nums[i];
            int complement = target - x;

            if (seen.count(complement))
            {
                return {seen[complement], i};
            }

            seen[x] = i;
        }

        return {};
    }
};