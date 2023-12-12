class Solution {
    public int maxProduct(int[] nums) {
        int max = -1;
        int secondMax = -1;
        
        for (int i = 0; i < nums.length; ++i)
        {
            if (nums[i] >= max)
            {
                secondMax = max;
                max = nums[i];
            }
            else if (secondMax < nums[i] && nums[i] < max)
                secondMax = nums[i];
        }
        return ((max - 1) * (secondMax - 1));
    }
}