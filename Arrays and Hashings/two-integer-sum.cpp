class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> results;
        for(int i = 0; i < nums.size(); i++)
            for(int j = 0; j < nums.size(); j++)
                if(nums[i] + nums[j] == target && i != j)
                {
                    results.push_back(i);
                    results.push_back(j);
                    return results;
                }  
    }
};
