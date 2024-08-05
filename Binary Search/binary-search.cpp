class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        int m;

        while(left <= right)
        {
            m = left + ((right - left) / 2);
            if (nums[m] > target) right = m - 1;
            else if (nums[m] < target) left = m + 1;
            else return m;
        }
        return -1;
    }
};
