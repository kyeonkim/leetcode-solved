class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> answer = {-1, -1};
        vector<int> flag = {-1, -1};
        int size = nums.size();
        //  O(log n) 이 아님. 수정 필요. 집가서 해결해보기 
        for (int i = 0; i < size; i++)
        {
            if (nums[i] == target && flag[0] == -1)
            {
                answer[0] = i;
                flag[0] = 1;
            }
            if (nums[size - i - 1] == target && flag[1] == -1)
            {
                answer[1] = size - i - 1;
                flag[1] = 1;
            }
            if (flag[0] == 1 && flag[1] == 1)
                break;
        }
        return answer;
    }
};