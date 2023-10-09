class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> answer = {-1, -1};

        answer[0] = binarySearchTree(nums, target, false);
        answer[1] = binarySearchTree(nums, target, true);
        return answer;
    }

    int binarySearchTree(vector<int>& nums, int target, bool isRight)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        int findIndex = -1;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (nums[mid] == target)
            {
                findIndex = mid;
                if (isRight)
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return findIndex;
    }
};