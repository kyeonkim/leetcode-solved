/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int top = findTopIndex(mountainArr);
        
        if (mountainArr.get(top) == target)
            return top;
        int answer = binarySearch(mountainArr, target, 0, top - 1, 0);
        if (answer != -1) return answer;
        answer = binarySearch(mountainArr, target, top + 1, mountainArr.length() - 1, 1);
        if (answer != -1) return answer;
        return -1;
    }

    int findTopIndex(MountainArray &mountainArr)
    {
        int start = 1;
        int end = mountainArr.length() - 2;
        int mid;
        int left_value;
        int mid_value;
        int right_value;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            left_value = mountainArr.get(mid - 1);
            mid_value = mountainArr.get(mid);
            right_value = mountainArr.get(mid + 1);
            if (left_value < mid_value && right_value < mid_value)
                return mid;
            else if (mid_value < right_value && left_value < right_value)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return mid;
    }

     int binarySearch(MountainArray &mountainArr, int target, int start, int end, int isRight)
    {
        int mid;

        while (start <= end)
        {
            mid = start + ((end - start) / 2);
            if (mountainArr.get(mid) == target)
                return mid;
            if (isRight)
            {
                if (mountainArr.get(mid) < target)
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            else
            {
                if (mountainArr.get(mid) < target)
                    start = mid + 1;
                else
                    end = mid - 1;
            }

        }
        return -1;
    }
};